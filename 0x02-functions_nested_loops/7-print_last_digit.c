#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the numbr to print the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 10)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
