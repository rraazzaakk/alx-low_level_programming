#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;   // Declare a variable to hold the list of arguments
    unsigned int i;

    va_start(ap, n);   // Initialize the argument list

    for (i = 0; i < n; i++)
    {
        int num = va_arg(ap, int);   // Get the next argument from the list
        printf("%d", num);           // Print the number

        if (separator != NULL && i != (n - 1))
        {
            printf("%s", separator);  // Print the separator if needed
        }
    }
    
    putchar('\n');   // Print a new line at the end
    va_end(ap);       // Clean up the argument list
}

int main(void)
{
    print_numbers(", ", 5, 10, 20, 30, 40, 50);  // Example usage
    return (0);
}
