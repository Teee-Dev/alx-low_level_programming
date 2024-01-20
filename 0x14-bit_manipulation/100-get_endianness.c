#include "main.h"

/**
 * determine_endianness - checks the endianness of the system.
 *
 * Return: 0 for big endian, 1 for little endian
 */
int determine_endianness(void)
{
int value = 1;
char *byte_pointer = (char *)&value;
return (*byte_pointer);
}
