#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "Lib.h"

int main()
{
    const int32_t n = getNumberFromUser();
    const bool is_div2 = divisibleBy2(n);
    printf("Is div by 2: %d\n", is_div2);

    return 0;
}
