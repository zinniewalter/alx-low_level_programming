#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the pointer of the head node.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}
	return (prev_node);
}
