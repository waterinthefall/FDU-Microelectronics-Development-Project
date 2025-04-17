#include "wav_parser.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: %s <WAV file path>\n", argv[0]);
        return 1;
    }

    AudioData* audio = parse_wav(argv[1]);
    if (!audio) {
        fprintf(stderr, "Failed to parse WAV file\n");
        return -1;
    }

    printf("[File parsed successfully]\n");
    printf("Sample rate: %u Hz\n", audio->sample_rate);
    printf("Channels: %u\n", audio->num_channels);
    printf("Bit depth: %u-bit\n", audio->bits_per_sample);
    printf("Duration: %.2f seconds\n", (float)audio->num_samples / audio->sample_rate);

    free_audio_data(audio);
    return 0;
}