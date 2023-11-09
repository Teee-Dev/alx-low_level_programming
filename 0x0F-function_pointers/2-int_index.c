#include "function_pointers.h"

/*
 * int_index - Returns the index of the first element satisfying a condition.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that checks a condition on an integer.
 *
 * Description: Searches for an element in the array (@array) of size (@size)
 * for which the condition specified by the function (@cmp) is true. If such an
 * element is found, the function returns its index. Otherwise, it returns -1.
 * Returns -1 for invalid inputs.
 *
 * Return: Index of the first element satisfying the condition, or -1 if none.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
