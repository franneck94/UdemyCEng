# Exercise

Implement the following functions:

```cpp
bool all_of(int32_t *array, size_t length, int32_t value);

bool any_of(int32_t *array, size_t length, int32_t value);

bool none_of(int32_t *array, size_t length, int32_t value);

size_t count(int32_t *array, size_t length, int32_t value);
```

- All Of
  - Returns true if all elements in the array are equal to the **value**
  - E.g. all_of([1, 1, 1], 3, 1) => true
  - E.g. all_of([1, 1, 2], 3, 1) => false
- Any Of
  - Returns true if at least one element in the array is equal to the **value**
  - E.g. any_of([1, 1, 1], 3, 1) => true
  - E.g. any_of([1, 1, 2], 3, 1) => true
- None Of
  - Returns true if all elements in the array are not equal to the **value**
  - E.g. none_of([1, 1, 1], 3, 1) => false
  - E.g. none_of([1, 1, 2], 3, 1) => false
- Count
  - Counts the elements in the array that are equal to the **value**
  - E.g. count([1, 1, 1], 3, 1) => 3
  - E.g. count([1, 1, 2], 3, 1) => 2

Note: Make sure that the input pointers are valid.

## Main Function

```cpp
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
    printf("count of 1: %zu", count(array, length, 1));

    test_cases(); // This should not fail!

    return 0;
}

void test_cases()
{
    int32_t array[] = {2, 1, -2, 0, -1};
    size_t length = 5;

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
```
