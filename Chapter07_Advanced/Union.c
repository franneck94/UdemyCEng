#include <stdint.h>
#include <stdio.h>

typedef struct
{
    int32_t id;
    float val;
} data_struct_t;

typedef union
{
    int32_t id;
    float val;
} data_union_t;

int main()
{
    data_struct_t data_s = {.id = 0, .val = 42.0f};
    printf("%llu Byte\n", sizeof(data_s));

    data_union_t data_u;
    printf("%llu Byte\n", sizeof(data_u));

    data_u.val = 42.5f;
    printf("%f\n", data_u.val); // 01000010001010100000000000000000
    printf("%d\n", data_u.id);  // 1110048768

    data_u.id = 42;
    printf("%.48f\n", data_u.val); // 5.88545355016e-44
    printf("%d\n", data_u.id);  // 00000000000000000000000000101010

    return 0;
}
