#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a given name using a function pointer.
 * @name: The string to be printed.
 * @f: A pointer to the function responsible for printing the name.
 * This function takes a string (@name) and a pointer to a function
 * (@f) as parameters. If the string or function pointer is NULL, the function
 * does nothing. Otherwise, it calls the specified function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
