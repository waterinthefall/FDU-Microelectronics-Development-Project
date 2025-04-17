#ifndef WAV_PARSER_H
#define WAV_PARSER_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// 结构体定义
#pragma pack(push, 1)
typedef struct {
    char     riff[4];          
    uint32_t file_size;        
    char     wave[4];          
    char     fmt[4];           
    uint32_t fmt_size;         
    uint16_t audio_format;     
    uint16_t num_channels;     
    uint32_t sample_rate;      
    uint32_t byte_rate;        
    uint16_t block_align;      
    uint16_t bits_per_sample;  
    char     data[4];          
    uint32_t data_size;        
} WAVHeader;
#pragma pack(pop)

typedef struct {
    uint32_t sample_rate;
    uint32_t num_samples;
    int16_t* pcm_data;
    uint32_t data_size;
    uint16_t num_channels;
    uint16_t bits_per_sample;
} AudioData;

// 内存管理函数
void free_audio_data(AudioData* audio);

// 核心解析函数
AudioData* parse_wav(const char* filename);

#endif