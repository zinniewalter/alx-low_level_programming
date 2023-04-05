#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to head node
 *
 * Return: the number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (!h)
		return (count);

	current = *h;

	while (current != NULL)
	{
		next = current->next;

		free(current);

		count++;

		if (next >= current)
			break;

		current = next;
	}

	*h = NULL;

	return (count);
}
