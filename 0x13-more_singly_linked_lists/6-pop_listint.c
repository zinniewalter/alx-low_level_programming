#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns the head node's data
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_node;

	if (*head == NULL)
	return (0);

	current_node = *head;
	data = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (data);
}
