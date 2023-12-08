#include <stdint.h>
#include <stdio.h>

#define NUMBERS1_LEN 4
#define NUMBERS2_LEN 5

int main()
{
    int32_t numbers[NUMBERS1_LEN]; // array with length 4

    // index is an unsigned integer
    // Index Set = {0, 1, 2, 3}
    for (size_t i = 0U; i < NUMBERS1_LEN; i++)
    {
        numbers[i] = 1337; // left of =: write
    }

    for (size_t i = 0U; i < NUMBERS1_LEN; i++)
    {
        printf("%d\n", numbers[i]); // read
    }

    int32_t numbers2[NUMBERS2_LEN] = {13, 24, 35, 46, 57};

    for (size_t i = 0U; i < NUMBERS2_LEN; i++)
    {
        printf("%d\n", numbers2[i]); // read
    }

    double N[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    for (size_t i = 0U; i < 3U; i++)
    {
        for (size_t j = 0U; j < 2U; j++)
        {
            printf("N[%u][%u] = %lf\n", i, j, N[i][j]); // Read operation
        }
    }

    return 0;
}
