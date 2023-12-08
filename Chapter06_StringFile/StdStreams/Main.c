#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int32_t data[5] = {0};

    for (uint32_t i = 0U; i < 5U; i++)
    {
        fscanf(stdin, "%d", &data[i]);
    }

    printf("\n");

    for (uint32_t i = 0U; i < 5U; i++)
    {
        fprintf(stdout, "STDOUT: %d\n", data[i]);
    }

    printf("\n");

    for (uint32_t i = 0U; i < 5U; i++)
    {
        fprintf(stderr, "STDERR: %d\n", data[i]);
    }

    return 0;
}
