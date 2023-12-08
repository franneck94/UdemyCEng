#include <stdint.h>
#include <stdio.h>
#include <time.h>

double do_something()
{
    volatile double value = 0.0;

    for (uint32_t i = 0; i < 1000000000; i++)
    {
        value += i;
    }

    return value;
}

int main()
{
    clock_t time_start = clock();
    do_something();
    clock_t time_end = clock();

    clock_t duration = time_end - time_start;

    const double secs = (double)duration / CLOCKS_PER_SEC;
    const double millisec = 1000.0 * secs;
    const double microsecs = 1000.0 * millisec;
    const double nanosecs = 1000.0 * microsecs;

    printf("s: %lf\n", secs);
    printf("ms: %lf\n", millisec);
    printf("us: %lf\n", microsecs);
    printf("ns: %lf\n", nanosecs);

    return 0;
}
