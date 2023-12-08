#include <stdio.h>

int main()
{
    float f = 1.5F;
    double d = 1.5F;

    printf("%.32f\n", f);
    printf("%.32lf\n", d);

    return 0;
}
