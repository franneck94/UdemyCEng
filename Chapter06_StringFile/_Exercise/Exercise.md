# Exercise

In this exercise we will re-use some char functions from chapter 3.

Implement the following functions:

```cpp
char *to_upper_case_str(char *text);

char *to_lower_case_str(char *text);

char *char_search(char *text, char character);
```

- To Upper Case
  - Upper case all characters of the string
  - The upper case result is stored/overwritten in the input array
- To Lower Case
  - Lower case all characters of the string
  - The lower case result is stored/overwritten in the input array
- Char Search
  - Return the pointer to the position where the **character** is found in the string
  - If not found, return **NULL**

Note: Make sure that the input pointer is valid.

## Main Function

```cpp
int main()
{
    char input_text[50] = {'\0'};

    printf("Please enter any text: ");
    scanf("%s", input_text);

    printf("to_upper_case: %s\n", to_upper_case_str(input_text));
    printf("to_lower_case: %s\n", to_lower_case_str(input_text));
    printf("char_search: %s\n", char_search(input_text, 'a'));

    return 0;
}
