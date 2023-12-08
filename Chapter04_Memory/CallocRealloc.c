#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_int32_array(int32_t *arr, const size_t length)
{
    for (uint32_t i = 0U; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");
}

int main()
{
    size_t length = 3;

    int32_t *arr1 = (int32_t *)malloc(length * sizeof(int32_t));
    if (arr1 == NULL)
    {
        return 1;
    }
    memset(arr1, 0, length * sizeof(int32_t));
    print_int32_array(arr1, length);
    free(arr1);

    int32_t *arr2 = (int32_t *)calloc(length, sizeof(int32_t));
    if (arr2 == NULL)
    {
        return 1;
    }
    print_int32_array(arr2, length);

    size_t user_length = 0;
    scanf("%llu", &user_length);

    arr2 = (int32_t *)realloc(arr2, user_length * sizeof(int32_t));
    if (arr2 == NULL)
    {
        return 1;
    }
    memset(arr2, 0, user_length * sizeof(int32_t));
    print_int32_array(arr2, user_length);

    return 0;
}
