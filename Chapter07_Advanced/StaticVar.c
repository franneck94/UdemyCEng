#include <stdint.h>
#include <stdio.h>

static int32_t run_cnt = 0; // global static

int32_t my_computation(const int32_t arg1, const int32_t arg2)
{
    static int32_t cnt = 1; // local static
    printf("%d\n", cnt);

    int32_t result = arg1 * arg2;

    cnt++;
    return result;
}

int main()
{
    int32_t val1 = 1;
    int32_t val2 = 2;

    for (int32_t i = 0; i < 3; i++)
    {
        val1 = my_computation(val1, val2);
    }

    return 0;
}
