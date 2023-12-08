#ifndef LIB_H
#define LIB_H

#include <stdbool.h>
#include <stdint.h>

bool all_of(const int32_t *const array,
            const size_t length,
            const int32_t value);

bool any_of(const int32_t *const array,
            const size_t length,
            const int32_t value);

bool none_of(const int32_t *const array,
             const size_t length,
             const int32_t value);

size_t count(const int32_t *const array,
             const size_t length,
             const int32_t value);

#endif
