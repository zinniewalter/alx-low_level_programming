#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number 1 and 2 chars
 *
 * Return: the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNumber = 0;
	int i = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
		decimalNumber = 2 * decimalNumber + (b[i] - '0');
		i++;
	}
	return (decimalNumber);
}
