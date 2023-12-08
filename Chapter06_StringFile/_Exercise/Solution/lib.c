#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

/* CHARS */

bool is_lower_case(char character)
{
    if ((character >= 'a') && (character <= 'z'))
    {
        return true;
    }

    return false;
}

bool is_upper_case(char character)
{
    if ((character >= 'A') && (character <= 'Z'))
    {
        return true;
    }

    return false;
}

bool is_numeric(char character)
{
    if ((character >= '0') && (character <= '9'))
    {
        return true;
    }

    return false;
}

bool is_alpha(char character)
{
    if (is_upper_case(character) || is_lower_case(character))
    {
        return true;
    }

    return false;
}

bool is_alpha_numeric(char character)
{
    return is_numeric(character) || is_alpha(character);
}

char to_upper_case(char character)
{
    if (is_lower_case(character))
    {
        return character - 32;
    }

    return character;
}

char to_lower_case(char character)
{
    if (is_upper_case(character))
    {
        return character + 32;
    }

    return character;
}

char *to_upper_case_str(char *text)
{
    if (text == NULL)
    {
        return NULL;
    }

    char *current_character = text;

    while (*current_character != '\0')
    {
        *current_character = to_upper_case(*current_character);

        current_character++;
    }

    return text;
}

char *to_lower_case_str(char *text)
{
    if (text == NULL)
    {
        return NULL;
    }

    char *current_character = text;

    while (*current_character != '\0')
    {
        *current_character = to_lower_case(*current_character);

        current_character++;
    }

    return text;
}

char *char_search(char *text, char character)
{
    if (text == NULL)
    {
        return NULL;
    }

    while ((*text != character) && (*text != '\0'))
    {
        text++;
    }

    if (*text == '\0')
    {
        return NULL;
    }

    return text;
}
