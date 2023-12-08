#include <stdint.h>
#include <stdio.h>

void f1(int32_t *ptr)
{
    printf("%d\n", *ptr);
}

void f2(const int32_t *ptr)
{
    printf("%d\n", *ptr);
}

void f3(int32_t *const ptr)
{
    printf("%d\n", *ptr);
}

void f4(const int32_t *const ptr)
{
    printf("%d\n", *ptr);
}

int main()
{
    int32_t *ptr = NULL;
    int32_t v = 10;
    ptr = &v;

    f1(ptr);
    f2(ptr);
    f3(ptr);
    f4(ptr);

    return 0;
}
