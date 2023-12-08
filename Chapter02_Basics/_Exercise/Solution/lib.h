#ifndef LIB_H
#define LIB_H

#include <stdbool.h>

bool is_numeric(const char character);

bool is_alpha(const char character);

bool is_alpha_numeric(const char character);

bool is_upper_case(const char character);

bool is_lower_case(const char character);

char to_upper_case(const char character);

char to_lower_case(const char character);

#endif
