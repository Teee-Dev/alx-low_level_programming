#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size 'size' and assign character 'c'
 *
 * @size: size of the array
 * @c: character to assign
 *
 * Description: This function creates an array of size 'size' and assigns
 * the character 'c' to each element of the array.
 *
 * Return: Pointer to the array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}