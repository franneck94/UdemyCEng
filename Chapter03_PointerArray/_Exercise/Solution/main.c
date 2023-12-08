#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "lib.h"

void test_cases();

int main()
{
    const int32_t array[8] = {3, 1, 4, 1, 5, 9, 2, 6};
    const size_t length = 8;

    printf("all_of: %d\n", all_of(array, length, 5));
    printf("any_of: %d\n", any_of(array, length, 5));
    printf("none_of: %d\n", none_of(array, length, 5));
    printf("count of 1: %zu\n", count(array, length, 1));

    test_cases(); // This should not fail!

    return 0;
}

void test_cases()
{
    const int32_t array[5] = {2, 1, -2, 0, -1};
    const size_t length = 5;

    assert(count(array, length, 1) == 1);
    assert(count(array, length, -3) == 0);

    assert(any_of(array, length, 2) == true);
    assert(any_of(array, length, 1) == true);
    assert(any_of(array, length, 0) == true);
    assert(any_of(array, length, -1) == true);
    assert(any_of(array, length, -2) == true);

    assert(none_of(array, length, 3) == true);
    assert(none_of(array, length, 2) == false);
    assert(none_of(array, length, 1) == false);
    assert(none_of(array, length, 0) == false);
    assert(none_of(array, length, -1) == false);
    assert(none_of(array, length, -2) == false);
    assert(none_of(array, length, -3) == true);
}
