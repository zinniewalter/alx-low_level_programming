#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list, safely
 * @head: pointer to the beginning of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *next_node = NULL;

	if (!head)
		exit(98);

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *) current, current->n);
		next_node = current->next;
		if (next_node >= current)
		{
			printf("-> [%p] %d\n", (void *) next_node, next_node->n);
			exit(98);
		}
		current = next_node;
	}

	return (count);
}
