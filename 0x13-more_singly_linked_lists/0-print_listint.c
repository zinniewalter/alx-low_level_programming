#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}

	return (count);
}
