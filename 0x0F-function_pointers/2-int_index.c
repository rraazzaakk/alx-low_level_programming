#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array containing data.
 * @size: The size of the array.
 * @cmp: A function pointer for comparison.
 * Return: The index of the first element that matches the comparison,
 *         or -1 if no match is found or if input is invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0 || array == NULL || cmp == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) == 1)
            return i;
    }

    return -1;
}
