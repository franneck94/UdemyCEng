#include <assert.h>
#include <stdint.h>
#include <stdio.h>

// NDEBUG <=> Release Mode
// !Release == Debug
#ifndef NDEBUG
#define DEBUG
#endif

#define USE_ASSERTS

int function(const int input)
{
    return input * 2;
}

int main()
{
#if defined(DEBUG) && defined(USE_ASSERTS)
    printf("Running tests.\n");
    assert(function(2) == 4);
#endif

    return 0;
}
