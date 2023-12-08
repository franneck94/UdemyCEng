#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

void iota(int32_t *array, const size_t length, int32_t start_value)
{
    for (size_t i = 0; i < length; i++)
    {
        array[i] = start_value;

        start_value++;
    }
}

int32_t *inclusive_scan(const int32_t *const array, const size_t length)
{
    if (array == NULL)
    {
        return NULL;
    }

    int32_t *result = (int32_t *)malloc(length * sizeof(int32_t));

    result[0] = array[0];

    for (size_t i = 1; i < length; i++)
    {
        result[i] = result[i - 1] + array[i];
    }

    return result;
}
