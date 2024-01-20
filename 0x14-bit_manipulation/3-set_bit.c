#include "main.h"

/**
 * modify_bit - updates a bit to 1 at a specified index.
 * @num: number to modify
 * @bit_index: index to update bit
 *
 * Return: 1 on success, -1 on error
 */
int modify_bit(unsigned long int *num, unsigned int bit_index)
{
unsigned long int bit_mask;
if (bit_index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
bit_mask = 1 << bit_index;
*num = *num | bit_mask;
return (1);
}
