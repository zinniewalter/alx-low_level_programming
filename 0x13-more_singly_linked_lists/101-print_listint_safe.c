#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current_node, *check;

	if (head == NULL)
	{
		printf("Error: NULL pointer passed to print_listint_safe\n");
		exit(98);
	}

	current_node = head;
	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		node_count++;

		check = current_node->next;
		while (check != NULL)
		{
			if (check == current_node)
			{
				printf("-> [%p] %d\n", (void *)check, check->n);
				printf("Error: loop detected in list\n");
				exit(98);
			}
			check = check->next;
		}

		current_node = current_node->next;
	}

	return (node_count);
}
