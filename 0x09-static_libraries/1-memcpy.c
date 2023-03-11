#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	char *ptr2 = src;
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = ptr2[i];

	return (dest);
}
