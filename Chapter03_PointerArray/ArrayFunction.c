#include <stdint.h>
#include <stdio.h>

float meanArray(const int32_t *array, const size_t length)
{
    int32_t sum = 0;

    for (uint32_t i = 0U; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum / (int64_t)(length));
}

int main()
{
    int32_t array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float mean1 = meanArray(array1, 10);

    int32_t array2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    float mean2 = meanArray(array2, 8);

    return 0;
}
