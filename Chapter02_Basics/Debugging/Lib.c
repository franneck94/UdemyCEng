#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "Lib.h"

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
