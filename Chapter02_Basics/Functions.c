#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool divisibleBy2(const int32_t number);
int32_t getNumberFromUser();

int main()
{
    const int32_t n = getNumberFromUser();
    const bool is_div2 = divisibleBy2(n);
    printf("Is div by 2: %d\n", is_div2);

    return 0;
}

bool divisibleBy2(const int32_t number)
{
    return number % 2 == 0;
}

int32_t getNumberFromUser()
{
    int32_t number = 0;

    printf("Please enter an integer number: ");
    scanf("%d", &number);

    return number;
}
