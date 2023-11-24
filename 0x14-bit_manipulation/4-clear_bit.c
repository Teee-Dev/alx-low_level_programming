#include "main.h"
#include <stdlib.h>

/**
 * reset_bit - resets the value of a bit to 0 at a specified index.
 * @num: pointer to the number to be modified
 * @bit_index: index to reset bit
 *
 * Return: 1 on success, -1 on error
 */
int reset_bit(unsigned long int *num, unsigned int bit_index)
{
if (bit_index > sizeof(*num) * 8)
return (-1);
*num &= ~(1 << bit_index);
return (1);
}
