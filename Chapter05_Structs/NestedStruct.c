#include <stdint.h>
#include <stdio.h>

typedef struct Date
{
    uint32_t year;
    uint32_t month;
    uint32_t day;
} Date_t;

typedef struct Friend
{
    char name[50];
    Date_t birthday;
} Friend_t;

void print_date(const Date_t *const date)
{
    printf("%u.%u.%u\n", date->day, date->month, date->year);
}

void print_friend(const Friend_t *const friend)
{
    printf("%s\n", friend->name);
    print_date(&friend->birthday);
}

int main()
{
    Friend_t jan = {
        .name = "Jan",
        .birthday = {.year = 1994U, .month = 2U, .day = 24U},
    };
    Friend_t peter = {
        .name = "Peter",
        .birthday = {.year = 1959U, .month = 8U, .day = 13},
    };
    Friend_t hans = {
        .name = "Maria",
        .birthday = {.year = 1970U, .month = 12U, .day = 31},
    };
    Friend_t friend_book[] = {jan, peter, hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);

    return 0;
}
