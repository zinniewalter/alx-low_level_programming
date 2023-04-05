#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of  a linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	while (current != NULL && i < index)
	{
	temp = current;
	current = current->next;
	i++;
	}

	if (current == NULL)
	return (-1);

	if (temp == NULL)
	*head = current->next;
	else
	temp->next = current->next;

	free(current);
	return (1);
}
