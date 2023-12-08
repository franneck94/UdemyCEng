#include <stdint.h>
#include <stdio.h>

#define CONST_DEF 1

int main()
{
    const uint32_t const_var = 1;

    printf("%d\n", const_var);
    printf("%d\n", CONST_DEF);

    return 0;
}
