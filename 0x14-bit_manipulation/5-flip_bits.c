#include "main.h"

/**
 * flip_bits - the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int count = 0;

	while (xorResult)
	{
		count += xorResult & 1;
		xorResult >>= 1;
	}

	return (count);
}
