#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: is the the character to be checked
 * Return: 1 if character is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
