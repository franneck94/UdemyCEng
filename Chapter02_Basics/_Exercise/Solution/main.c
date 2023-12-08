#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "lib.h"

void test_cases();

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    printf("is_numeric: %d\n", is_numeric(character));
    printf("is_alpha: %d\n", is_alpha(character));
    printf("is_alpha_numeric: %d\n", is_alpha_numeric(character));
    printf("is_upper_case: %d\n", is_upper_case(character));
    printf("is_lower_case: %d\n", is_lower_case(character));

    printf("to_upper_case: %c\n", to_upper_case(character));
    printf("to_lower_case: %c\n", to_lower_case(character));

    test_cases(); // These tests should not fail!

    return 0;
}

void test_cases()
{
    const char lowercase_alpha = 'a';
    const char uppercase_alpha = 'A';
    const char numeric = '5';
    const char something_else = '#';

    assert(is_numeric(lowercase_alpha) == false);
    assert(is_numeric(uppercase_alpha) == false);
    assert(is_numeric(numeric) == true);
    assert(is_numeric(something_else) == false);

    assert(is_alpha(lowercase_alpha) == true);
    assert(is_alpha(uppercase_alpha) == true);
    assert(is_alpha(numeric) == false);
    assert(is_alpha(something_else) == false);

    assert(is_alpha_numeric(lowercase_alpha) == true);
    assert(is_alpha_numeric(uppercase_alpha) == true);
    assert(is_alpha_numeric(numeric) == true);
    assert(is_alpha_numeric(something_else) == false);

    assert(is_upper_case(lowercase_alpha) == false);
    assert(is_upper_case(uppercase_alpha) == true);
    assert(is_upper_case(numeric) == false);
    assert(is_upper_case(something_else) == false);

    assert(is_lower_case(lowercase_alpha) == true);
    assert(is_lower_case(uppercase_alpha) == false);
    assert(is_lower_case(numeric) == false);
    assert(is_lower_case(something_else) == false);

    assert(to_upper_case(lowercase_alpha) == uppercase_alpha);
    assert(to_upper_case(uppercase_alpha) == uppercase_alpha);
    assert(to_upper_case(numeric) == numeric);
    assert(to_upper_case(something_else) == something_else);
}
