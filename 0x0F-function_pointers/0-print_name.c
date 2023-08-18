#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Displays a given name using a provided function.
 * @name: The name to be displayed.
 * @f: A function that handles the display of the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;
    
    // Call the provided function to display the name.
    f(name);
}

