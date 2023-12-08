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
    time_t time_start = time(NULL);
    do_something();
    time_t time_end = time(NULL);

    printf("Timestamp Start: %u\n", (uint32_t)time_start);
    printf("Timestamp End: %u\n", (uint32_t)time_end);

    printf("Time Format: %s\n", ctime(&time_end));

    struct tm *time_struct = localtime(&time_end);
    printf("Hour: %d\n", time_struct->tm_hour);
    printf("Min: %d\n", time_struct->tm_min);
    printf("Sec: %d\n", time_struct->tm_sec);

    return 0;
}
