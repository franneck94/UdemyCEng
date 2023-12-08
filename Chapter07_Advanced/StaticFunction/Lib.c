#include <stdint.h>
#include <stdio.h>

#include "Lib.h"

static int32_t my_inner_computation(const int32_t arg1, const int32_t arg2)
{
    static int32_t cnt = 1;
    printf("%d\n", cnt);

    int32_t result = arg1 * arg2;

    cnt++;
    return result;
}

int32_t my_outer_computation(const int32_t arg1, const int32_t arg2)
{
    return my_inner_computation(arg1, arg2);
}
