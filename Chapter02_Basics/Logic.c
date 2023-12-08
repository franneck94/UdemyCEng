#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t age_jan = 30;
    uint32_t age_marc = 30;

    bool jan_is_younger = age_jan < age_marc;
    bool jan_is_older = age_jan > age_marc;

    if (true == jan_is_younger)
    {
        printf("Jan is younger than Marc.\n");
    }
    else if (jan_is_older == true)
    {
        printf("Marc is younger than Jan.\n");
    }
    else
    {
        printf("Jan and Marc have the same age.\n");
    }

    return 0;
}
