#include <stdint.h>
#include <stdio.h>

#include "Lib.h"

int main()
{
    int32_t val1 = 1;
    int32_t val2 = 2;

    for (int32_t i = 0; i < 3; i++)
    {
        val1 = my_outer_computation(val1, val2);
    }

    return 0;
}
