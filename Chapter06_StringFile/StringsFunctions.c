#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char friend_jan[50] = "";
    char friend_peter[50] = "";
    char friend_hans[50] = "";

    strncpy(friend_jan, "Jan Schaffranek", 20);
    strncpy(friend_peter, "Peter Lustig", 20);
    strncpy(friend_hans, "Hans Meier", 20);

    printf("%s\n", friend_jan);
    printf("%s\n", friend_peter);
    printf("%s\n", friend_hans);

    strncat(friend_jan, " Dr.", 5);

    printf("%s\n", friend_jan);
    printf("%s\n", friend_peter);
    printf("%s\n", friend_hans);

    const size_t length0 = strlen(friend_jan);
    const size_t length1 = strlen(friend_peter);
    const size_t length2 = strlen(friend_hans);

    printf("%llu\n", length0);
    printf("%llu\n", length1);
    printf("%llu\n", length2);

    const int compare0 = strncmp(friend_jan, friend_peter, 20);
    const int compare1 = strncmp(friend_jan, friend_hans, 20);
    const int compare2 = strncmp(friend_peter, friend_hans, 20);

    printf("%d\n", compare0);
    printf("%d\n", compare1);
    printf("%d\n", compare2);

    char *found_char0 = strchr(friend_jan, 'n');
    if (NULL != found_char0)
    {
        printf("%s\n", found_char0);
    }

    char *found_char1 = strrchr(friend_jan, 'n');
    if (NULL != found_char1)
    {
        printf("%s\n", found_char1);
    }

    char *found_substr = strstr(friend_peter, "Jan");

    if (NULL != found_substr)
    {
        printf("%s\n", found_substr);
    }

    char *token = strtok(friend_jan + 4, " ");

    if (NULL != token)
    {
        printf("%s\n", token);
    }

    return 0;
}
