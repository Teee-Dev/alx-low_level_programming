#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates through each element of an
 * array and performs an action.
 * @array: The array to be iterated.
 * @size: The number of elements to iterate.
 * @action: A pointer to a function that defines the action to be performed
 *This function takes an integer array (@array)
 * and its size (@size) as parameters, along with a function pointer
 * (@action) representing the action to be performed on each array element.
 * If the array or function pointer is NULL, the
 * function does nothing. Otherwise, it iterates through the
 * array and applies the specified action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
