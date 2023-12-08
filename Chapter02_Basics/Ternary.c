#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t age1 = 28;
    uint32_t age2 = 56;

    // 1.
    uint32_t older_age1;
    if (age1 > age2)
    {
        older_age1 = age1;
    }
    else
    {
        older_age1 = age2;
    }
    printf("%d\n", older_age1);

    // 2. Ternary Operator
    //               BOOL EXPR   ? True : False
    uint32_t older_age2 = (age1 > age2) ? age1 : age2;
    printf("%d\n", older_age2);

    return 0;
}
