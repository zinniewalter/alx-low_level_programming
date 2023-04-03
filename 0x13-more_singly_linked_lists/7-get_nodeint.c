#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to return, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *current_node;

	current_node = head;
	for (a = 0; current_node != NULL && a < index; a++)
	{
		current_node = current_node->next;
	}

	if (a == index && current_node != NULL)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
}
