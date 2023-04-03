#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: A pointer to a pointer to the head node of the list.
 * @idx: The index where the new node should be inserted, starting at 0.
 * @n: The value to store in the new node's data (n) field.
 *
 * Return: A pointer to the new node, or NULL if the insertion failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;

	for (a = 0; current_node != NULL && a < idx - 1; a++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
