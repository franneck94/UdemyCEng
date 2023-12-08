#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t *createArray(const size_t length, const int32_t value)
{
    int32_t *array = (int32_t *)malloc(length * sizeof(int32_t)); // 0xAA

    if (NULL == array)
    {
        return NULL;
    }

    for (uint32_t i = 0U; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

int32_t *freeArray(int32_t *array)
{
    if (NULL != array)
    {
        free(array); // 0xAA
    }
    return NULL;
}

int main()
{
    size_t length = 3U;
    int32_t *array = createArray(length, 1);

    for (uint32_t i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    freeArray(array);

    return 0;
}
