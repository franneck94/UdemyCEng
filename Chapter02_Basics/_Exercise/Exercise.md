# Exercise

In this exercise, you have to use the datatype **char** to convert/check certain char values.

Implement the following checks:

```cpp
bool is_numeric(const char character);

bool is_alpha(const char character);

bool is_alpha_numeric(const char character);

bool is_upper_case(const char character);

bool is_lower_case(const char character);
```

These functions should return **true** or **false**.

Meaning of the function names:

- Numeric: 0-9 (digits)
- Alpha: a-z, A-Z (alphabeth characters)
- Upper Case: A-Z
- Lower Case: a-z

Note:

The shift from **Upper Case** to **Lower Case** is 32 in the ASCII table.  

E.g. 'A' -> 'a' by adding 32
E.g. 'a' -> 'A' by subtracting 32

You do not have to look up the ASCII table for this exercise, but you can do so.

Afterward, implement the following conversion functions:

```cpp
char to_upper_case(const char character);

char to_lower_case(const char character);
```

These should return the **converted** character.

## Main Function

```cpp
int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    printf("is_numeric: %d\n", is_numeric(character));
    printf("is_alpha: %d\n", is_alpha(character));
    printf("is_alpha_numeric: %d\n", is_alpha_numeric(character));
    printf("is_upper_case: %d\n", is_upper_case(character));
    printf("is_lower_case: %d\n", is_lower_case(character));

    printf("to_upper_case: %c\n", to_upper_case(character));
    printf("to_lower_case: %c\n", to_lower_case(character));

    test_cases(); // These tests should not fail!

    return 0;
}
```
