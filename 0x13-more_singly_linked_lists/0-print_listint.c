#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A program that prints all elements of a linked list
 * @h:linked list of type listint_t to be  printed
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
