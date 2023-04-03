#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list to free.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	*head = NULL;
}
