#include <stdint.h>
#include <stdio.h>

int main()
{
    int32_t a = 10;
    printf("%p\n", &a);

    int32_t* p = &a;
    printf("%p\n", p);

    return 0;
}
