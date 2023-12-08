#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

void test_cases();

int main()
{
    char input_text[50] = {'\0'};

    printf("Please enter any text: ");
    scanf("%s", input_text);

    printf("to_upper_case: %s\n", to_upper_case_str(input_text));
    printf("to_lower_case: %s\n", to_lower_case_str(input_text));
    printf("char_search: %s\n", char_search(input_text, 'a'));

    test_cases(); // This should not fail

    return 0;
}

void test_cases()
{
    char in_text[] = "JaNa";
    char text_up[] = "JANA";
    char text_low[] = "jana";

    char *to_upper = to_upper_case_str(in_text);
    assert(strncmp(to_upper, text_up, 4) == 0);
    char *to_lower = to_lower_case_str(in_text);
    assert(strncmp(to_lower, text_low, 4) == 0);
}
