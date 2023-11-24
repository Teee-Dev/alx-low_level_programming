#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @binary_str: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *binary_str)
{
    if (!binary_str)
        return (0);

    unsigned int result = 0;

    for (int i = 0; binary_str[i] != '\0'; i++)
    {
        if (binary_str[i] != '0' && binary_str[i] != '1')
            return (0);
    }

    for (int i = 0; binary_str[i] != '\0'; i++)
    {
        result <<= 1;

        if (binary_str[i] == '1')
            result += 1;
    }

    return (result);
}
