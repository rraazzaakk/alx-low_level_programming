#include "function_pointers.h"

/**
 * array_iterator - Perform an action on each element of an array.
 * @array: The array to be iterated.
 * @size: The size of the array.
 * @action: A pointer to the function that will be applied to each element.
 * 
 * This function takes an array, its size, and a function pointer as arguments.
 * It executes the specified function on each element of the array. If either
 * the array or the function pointer is NULL, the function returns immediately.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < (int)size; i++)
    {
        action(array[i]);
    }
}
