#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int comp_double(const void *value1, const void *value2)
{
    double left = *((double *)(value1));
    double right = *((double *)(value2));

    if (left > right)
    {
        return -1;
    }
    if (right > left)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int data[4] = {-2.0, 3.0, -1.0, 12.0};

    for (uint32_t i = 0U; i < 4; i++)
    {
        printf("data[%d] = %f\n", i, data[i]);
    }

    qsort(&data, 4, sizeof(int), comp_double);

    for (uint32_t i = 0U; i < 4; i++)
    {
        printf("data[%d] = %f\n", i, data[i]);
    }

    return 0;
}
