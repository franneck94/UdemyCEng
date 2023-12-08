#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[] = {'J', 'a', 'n', '\0'}; // null-terminating symbol
    char name2[4] = {'J', 'a', 'n', '\0'};
    char name3[] = "Jan";
    char name4[32] = {'\0'};
    name4[0] = 'J';
    name4[1] = 'a';
    name4[2] = 'n';
    name4[3] = '\0';

    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%s\n", name3);
    printf("%s\n", name4);

    return 0;
}
