#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyCEng/";

int main()
{
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter06_StringFile/UnkSize/InputData.txt", 60);

    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter06_StringFile/UnkSize/OutputData.txt", 60);

    FILE *fp_in = fopen(input_filepath, "r");

    if (NULL == fp_in)
    {
        return 1;
    }

    int line_size = 100;
    char line[100] = {'\0'};

    while (fgets(line, line_size, fp_in) != NULL)
    {
        int value = atoi(line);
        printf("%s", line);
        printf("%d\n\n", value);
    }

    fclose(fp_in);

    FILE *fp_out = fopen(output_filepath, "w");

    if (NULL == fp_out)
    {
        return 1;
    }

    int32_t data[5] = {1, 2, 3, 4, 5};

    for (uint32_t i = 0; i < 5; i++)
    {
        char temp[50] = {'\0'};
        sprintf(temp, "Value: %d - LineEnd\n", data[i]);
        fputs(temp, fp_out);
    }

    fclose(fp_out);

    return 0;
}
