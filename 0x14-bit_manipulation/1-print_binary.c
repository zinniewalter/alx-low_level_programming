#include "main.h"

/**
 * print_binary - a program that prints prints the binary equivalent of a
 * decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63, num = 0;
	unsigned long int value;

	while (i >= 0)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		_putchar('0');
		i--;
	}
	if (!num)
	_putchar('0');
}
