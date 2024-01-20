#include "main.h"

/**
 * count_different_bits - counts differing bits between two numbers.
 * @num1: first number
 * @num2: second number
 *
 * Return: number of differing bits
 */

unsigned int count_different_bits(unsigned long int num1, unsigned long int num2)
{
int i, bit_count = 0;
unsigned long int xor_result = num1 ^ num2;
for (i = 63; i >= 0; i--)
{
if ((xor_result >> i) & 1)
bit_count++;
}
return (bit_count);
}
