#include <stdio.h>

int main()
{
    float float_value = 0.0F;
    double double_value = 0.0;
    int int_value = 0;
    unsigned int uint_value = 0U;
    long long int llint_value = 0LL;

    printf("Please enter a float value: ");
    int ret1 = scanf("%f", &float_value);
    int ret2 = printf("float value: %f\n", float_value);

    printf("Please enter a double value: ");
    scanf("%lf", &double_value);
    printf("double value: %lf\n", double_value);

    printf("Please enter an int value: ");
    scanf("%d", &int_value);
    printf("int value: %d\n", int_value);

    printf("Please enter an uint value: ");
    scanf("%u", &uint_value);
    printf("uint value: %u\n", uint_value);

    printf("Please enter an llint value: ");
    scanf("%lld", &llint_value);
    printf("llint value: %lld\n", llint_value);

    // -128, 127
    char c_value = 200;
    printf("%d\n", c_value);

    // 0, 255
    unsigned char uc_value = 200;
    printf("%d\n", uc_value);

    return 0;
}
