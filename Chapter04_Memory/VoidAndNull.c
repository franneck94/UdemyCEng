#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void CheckPtrAndFree(void *ptr)
{
    if (ptr == NULL)
        return;

    free(ptr);
}

int main()
{
    float *ptr = NULL;

    ptr = (float *)malloc(sizeof(float));
    *ptr = -12.0F;

    if (ptr != NULL)
    {
        free(ptr);
    }
    ptr = NULL;

    float *ptr2 = (float *)malloc(sizeof(float));
    *ptr2 = 1337.0F;

    if (ptr != NULL)
    {
        printf("%f\n", *ptr);
    }

    int32_t *ptr3 = (int32_t *)malloc(sizeof(int32_t));

    CheckPtrAndFree(ptr2);
    CheckPtrAndFree(ptr3);
}
