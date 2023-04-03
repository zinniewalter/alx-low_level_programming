#include "lists.h"

/**
 * add_nodeint_end - a program that adds a new node at the end of a list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New_node, *Last_node;

	New_node = malloc(sizeof(listint_t));
	if (New_node == NULL)
	{
		return (NULL);
	}
	New_node->n = n;
	New_node->next = NULL;

	if (*head == NULL)
	{
		*head = New_node;
	}
	else
	{
		Last_node = *head;

		while (Last_node->next != NULL)
			Last_node = Last_node->next;

		Last_node->next = New_node;
	}
	return (New_node);
}
