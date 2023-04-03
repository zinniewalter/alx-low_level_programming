#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		sum = sum + current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
