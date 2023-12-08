#include <stdint.h>
#include <stdio.h>
#include <string.h>

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyCEng/";

typedef struct
{
    int32_t a;
    float b;
} Data;

void print_data(const Data *const data)
{
    printf("%d - %f\n", data->a, data->b);
}

int main()
{
    Data data = {.a = 42, .b = 22.3f};
    print_data(&data);

    /////// WRITE

    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter06_StringFile/FileBinary/Data.bin", 60);

    FILE *fp_out = fopen(output_filepath, "wb");

    if (NULL == fp_out)
    {
        return 1;
    }

    fwrite(&data, sizeof(Data), 1, fp_out);
    fclose(fp_out);

    /////// READ

    Data data2;
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter06_StringFile/FileBinary/Data.bin", 60);

    FILE *fp_in = fopen(input_filepath, "rb");

    if (NULL == fp_in)
    {
        return 1;
    }

    fread(&data2, sizeof(Data), 1, fp_in);
    fclose(fp_in);

    print_data(&data);

    return 0;
}
