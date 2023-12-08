#include <stdbool.h>
#include <stdint.h>

#include "lib.h"

bool all_of(const int32_t *const array,
            const size_t length,
            const int32_t value)
{
    for (size_t i = 0; i < length; i++)
    {
        if (array[i] != value)
        {
            return false;
        }
    }

    return true;
}

bool any_of(const int32_t *const array,
            const size_t length,
            const int32_t value)
{
    for (size_t i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            return true;
        }
    }

    return false;
}

bool none_of(const int32_t *const array,
             const size_t length,
             const int32_t value)
{
    for (size_t i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            return false;
        }
    }

    return true;
}

size_t count(const int32_t *const array,
             const size_t length,
             const int32_t value)
{
    size_t counter = 0;

    for (size_t i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            counter++;
        }
    }

    return counter;
}
