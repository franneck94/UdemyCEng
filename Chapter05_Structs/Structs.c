#include <stdint.h>
#include <stdio.h>

struct Friend
{
    char name[50];
    uint32_t year;
    uint32_t month;
    uint32_t day;
};

void print_friend(struct Friend *const friend)
{
    printf("%s\n", friend->name);
    printf("%u.%u.%u\n", friend->day, friend->month, friend->year);
}

int main()
{
    struct Friend jan = {.name = "Jan", .year = 1994U, .month = 2U, .day = 24U};
    struct Friend peter = {.name = "Peter",
                           .year = 1959U,
                           .month = 8U,
                           .day = 13};
    struct Friend hans = {.name = "Maria",
                          .year = 1970U,
                          .month = 12U,
                          .day = 31};

    struct Friend friend_book[] = {jan, peter, hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);

    return 0;
}
