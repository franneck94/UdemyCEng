#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t num_iterations = 10;

    for (uint32_t i = 0; i < num_iterations; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");

    float user_input;
    float sum = 10.0f;

    do
    {
        scanf("%f", &user_input);

        if (user_input < 0.0)
        {
            break;
        }

        sum += user_input;
    } while (sum < 10.0f);

    printf("sum: %f\n", sum);

    return 0;
}
