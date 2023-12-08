#include <stdint.h>
#include <stdio.h>

void f(int32_t v)
{
    printf("%d\n", v);
}

int main()
{
    int32_t i = 0;
    printf("%d\n", i++); // post
    printf("%d\n", ++i); // pre

    i = 0;
    f(i++);
    f(++i);

    return 0;
}
