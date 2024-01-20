#include "main.h"

/**
 * _custom_pow - calculates the result of raising a base to a power
 * @base: base value
 * @power: exponent value
 * Return: result of base raised to the power
 */
unsigned long int _custom_pow(unsigned int base, unsigned int power)
{
unsigned long int result = 1;
while (power > 0)
{
result *= base;
power--;
}
return (result);
}

/**
 * print_binary_representation - prints the binary representation of a number
 * @number: the number to be printed in binary
 * Return: void
 */
void print_binary_representation(unsigned long int number)
{
unsigned long int divisor = _custom_pow(2, sizeof(unsigned long int) * 8 - 1);
char flag = 0;
while (divisor != 0)
{
if ((number & divisor) == divisor)
{
flag = 1;
_putchar('1');
}    
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
