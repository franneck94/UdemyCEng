#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

void print_int32_array(const int32_t *array, const size_t length)
{
    for (size_t i = 0; i < length - 1; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("%d\n", array[length - 1]);
}

int main()
{
    int32_t array[8] = {0};
    const size_t length = 8;

    iota(array, length, 0);
    print_int32_array(array, length);

    int32_t *inc_scan_values = inclusive_scan(array, length);
    printf("inclusive_scan: \n");
    print_int32_array(inc_scan_values, length);

    free(inc_scan_values);
    inc_scan_values = NULL;

    return 0;
}
