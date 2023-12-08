#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyCEng/";

int main()
{
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter06_StringFile/FileIO/InputData.txt", 60);

    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter06_StringFile/FileIO/OutputData.txt", 60);

    FILE *fp_in = fopen(input_filepath, "r");

    if (NULL == fp_in)
    {
        return 1;
    }

    Vector vec1 = {.data = createArray(5, 0), .length = 5};

    for (uint32_t i = 0; i < vec1.length; i++)
    {
        fscanf(fp_in, "%d", &vec1.data[i]);
    }

    fclose(fp_in);
    fp_in = NULL;

    for (uint32_t i = 0; i < vec1.length; i++)
    {
        vec1.data[i] -= 1;
    }

    FILE *fp_out = fopen(output_filepath, "w");

    if (NULL == fp_out)
    {
        return 1;
    }

    for (uint32_t i = 0; i < vec1.length; i++)
    {
        fprintf(fp_out, "%d\n", vec1.data[i]);
    }

    fclose(fp_out);

    freeArray(vec1.data);

    return 0;
}
