#include <stdint.h>
#include <stdio.h>

// int8_t 1byte: 0, 1, 2, ...
// int16_t 2byte: 0, 2, 4, ...
// int32_t 4byte: 0, 4, 8, 12, ...
// float 4byte: 0, 4, 8, 12, ...
// double 8byte: 0, 8, 16, ...

typedef struct
{
    int32_t a;
    float c;
    int8_t b;
} s_data;

typedef struct
{
    int32_t a;
    int8_t b;
    float c;
} s_data2;

typedef struct
{
    double c;
    uint32_t d;
    int16_t b;
    int8_t a;
} s_data3;

typedef struct
{
    double c;
    float a;
    float b;
} s_data4;

int32_t main()
{
    const s_data s = {.a = 0, .b = 0, .c = 0};
    printf("Size in byte: %llu\n", sizeof(s));

    const s_data2 s2 = {.a = 0, .b = 0, .c = 0};
    printf("Size in byte: %llu\n", sizeof(s2));

    const s_data3 s3 = {.a = 0, .b = 0, .c = 0, .d = 0};
    printf("Size in byte: %llu\n", sizeof(s3));

    const s_data4 s4 = {.a = 0, .b = 0, .c = 0};
    printf("Size in byte: %llu\n", sizeof(s4));

    return 0;
}
