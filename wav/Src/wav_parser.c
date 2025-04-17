#include "wav_parser.h"


#define CHECK_CHUNK_ID(header_ptr, member, expected) \
    do { \
        if (memcmp(header_ptr->member, expected, 4) != 0) { \
            fprintf(stderr, "Error: Invalid %s chunk (Expected: %s)\n", #member, expected); \
            return -3; \
        } \
    } while(0)

#define CHECK_AUDIO_FORMAT(header_ptr, format) \
    do { \
        if (header_ptr->format != 1) { \
            fprintf(stderr, "Error: Unsupported audio format (PCM required, found: %d)\n", header_ptr->format); \
            return -4; \
        } \
    } while(0)

static int init_wav_parser(const char* filename, FILE** fp_ptr, WAVHeader* header) {

    if (fopen_s(fp_ptr, filename, "rb") != 0 || !*fp_ptr) {
        fprintf(stderr, "Error: Failed to open file %s\n", filename);
        return -1;
    }

    if (fread(header, sizeof(WAVHeader), 1, *fp_ptr) != 1) {
        fprintf(stderr, "Error: Failed to read file header\n");
        fclose(*fp_ptr);
        return -2;
    }

    CHECK_CHUNK_ID(header, riff, "RIFF");
    CHECK_CHUNK_ID(header, wave, "WAVE");
    CHECK_CHUNK_ID(header, fmt, "fmt ");
    CHECK_AUDIO_FORMAT(header, audio_format);

    return 0;
}

AudioData* parse_wav(const char* filename) {
    FILE* fp = NULL;
    WAVHeader header;
    AudioData* audio = NULL;

    // 初始化解析器（需返回错误码）
    int ret = init_wav_parser(filename, &fp, &header);
    if (ret != 0) return NULL;

    // 创建AudioData结构体
    audio = (AudioData*)calloc(1, sizeof(AudioData));
    if (!audio) {
        fclose(fp);
        return NULL;
    }

    // 填充基本参数
    audio->sample_rate = header.sample_rate;
    audio->num_channels = header.num_channels;
    audio->bits_per_sample = header.bits_per_sample;

    // 查找data chunk（需处理块填充）
    while (memcmp(header.data, "data", 4) != 0) {
        uint32_t padded_size = header.data_size + (header.data_size % 2);  // WAV规范要求奇数长度块填充
        fseek(fp, padded_size, SEEK_CUR);
        if (fread(header.data, 4, 1, fp) != 1 || fread(&header.data_size, 4, 1, fp) != 1) {
            fprintf(stderr, "Error: Data chunk not found\n");
            free(audio);
            fclose(fp);
            return NULL;
        }
    }

    // 计算样本数
    audio->num_samples = header.data_size / 
                       (audio->num_channels * 
                       (audio->bits_per_sample / 8));
    audio->data_size = header.data_size;

    // 分配并读取PCM数据
    audio->pcm_data = (int16_t*)malloc(header.data_size);
    if (!audio->pcm_data) {
        free(audio);
        fclose(fp);
        return NULL;
    }
    size_t read_size = fread(audio->pcm_data, 1, header.data_size, fp);
    if (read_size != header.data_size) {
        fprintf(stderr, "Warning: Incomplete data read (%zu/%u bytes)\n", read_size, header.data_size);
    }

    fclose(fp);
    return audio;
}

void free_audio_data(AudioData* audio) {
    if (audio) {
        free(audio->pcm_data);
        free(audio);
    }
}