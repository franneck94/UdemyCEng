#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "Lib.h"

int32_t *createArray(const size_t length, const int32_t value)
{
    int32_t *data = (int32_t *)malloc(length * sizeof(int32_t));

    if (NULL == data)
    {
        return NULL;
    }

    for (uint32_t i = 0; i < length; i++)
    {
        data[i] = value;
    }

    return data;
}

int32_t *freeArray(int32_t *array)
{
    if (NULL != array)
    {
        free(array);
    }

    return NULL;
}

float meanVector(const Vector *const vector)
{
    if (NULL == vector || NULL == vector->data)
    {
        return 0.;
    }

    int32_t sum = 0;

    for (uint32_t i = 0; i < vector->length; i++)
    {
        sum += vector->data[i];
    }

    return (float)(sum) / (float)(vector->length);
}

int32_t minVector(const Vector *const vector)
{
    if (NULL == vector || NULL == vector->data)
    {
        return 0;
    }

    if (vector->length == 0)
    {
        return INT32_MIN;
    }

    int32_t current_min = vector->data[0];

    for (uint32_t i = 1; i < vector->length; i++)
    {
        if (vector->data[i] < current_min)
        {
            current_min = vector->data[i];
        }
    }

    return current_min;
}

int32_t maxVector(const Vector *const vector)
{
    if (NULL == vector || NULL == vector->data)
    {
        return 0;
    }

    if (vector->length == 0)
    {
        return INT32_MIN;
    }

    int32_t current_max = vector->data[0];

    for (uint32_t i = 1; i < vector->length; i++)
    {
        if (vector->data[i] > current_max)
        {
            current_max = vector->data[i];
        }
    }

    return current_max;
}

void printVector(const Vector *const vector)
{
    if (vector->data == NULL)
    {
        return;
    }

    for (uint32_t i = 0; i < vector->length; i++)
    {
        printf("%d\n", vector->data[i]);
    }
}
