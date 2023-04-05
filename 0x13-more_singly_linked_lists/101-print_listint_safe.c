#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list of integers (with loop handling)
 * @head: pointer to the head node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (!head)
	exit(98);

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}


		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		while (slow->next && slow->next != fast)
		{
			count++;
			printf("[%p] %d\n", (void *)slow->next, slow->next->n);
			slow = slow->next;
		}

		return (count);
}
