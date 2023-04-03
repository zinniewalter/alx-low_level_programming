#include "lists.h"

/**
 * free_listint - a program that frees a linked list
 * @head: A pointer to the head of the list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
