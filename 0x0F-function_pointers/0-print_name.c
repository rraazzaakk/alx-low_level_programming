#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Display a given name using a specified function.
 * @name: The name to be displayed.
 * @f: A pointer to a function that will be used to display the name.
 * 
 * This function takes a name and a function pointer as arguments.
 * If the function pointer is not NULL, it uses the provided function
 * to display the given name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (f != NULL)
        f(name);
}
