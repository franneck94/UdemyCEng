#ifndef LIB_H
#define LIB_H

#include <stdint.h>

typedef struct Vector
{
    int32_t *data;
    size_t length;
} Vector;

int32_t *createArray(const size_t length, const int32_t value);

int32_t *freeArray(int32_t *array);

float meanVector(const Vector *const vector);

int32_t minVector(const Vector *const vector);

int32_t maxVector(const Vector *const vector);

void printVector(const Vector *const vector);

#endif
