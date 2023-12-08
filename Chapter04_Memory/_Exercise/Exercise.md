# Exercise

Implement the following functions:

```cpp
void iota(int32_t *array, const size_t length, int32_t start_value);

int32_t *inclusive_scan(const int32_t *const array, const size_t length);
```

- iota
  - Set the elements of an array with incrementing numbers, starting at **start_value**
  - E.g. **length** = 4, **start_value** = 1 => [1, 2, 3, 4]
  - E.g. **length** = 6, **start_value** = -2 => [-2, -1, 0, 1, 2, 3]
- Inclusive Scan
  - Sum up all elements in the **array** for index $n$ from index 0 to $n$
  - Store the result in a result array at index $n$
  - Example:  
    [1, 2, 3] => [1, 3, 6]  
    [3, 4, 5] => [3, 7, 12]

Note: Make sure that the input pointers are valid.

## Main Function

```cpp
int main()
{
    int32_t array[8] = {0};
    size_t length = 8;

    iota(array, length, 0);
    print_int32_array(array, length);

    int32_t *inc_scan_values = inclusive_scan(array, length);
    printf("inclusive_scan: \n");
    print_int32_array(inc_scan_values, length);

    free(inc_scan_values);
    inc_scan_values = NULL;

    return 0;
}
```
