#include "main.h"
/**
* _isupper - checks if a a letter is upper
* @c: The number to be checked
* Return: 1 for upper letter or 0 fot any else
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
