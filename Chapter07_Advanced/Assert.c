#include <assert.h>
#include <stdio.h>

int function(const int input)
{
    assert(input > -10);

    return input * 2;
}

int main()
{
    const int ret = function(2);
    const int expected = 4;

    assert(ret == expected);

    return 0;
}
