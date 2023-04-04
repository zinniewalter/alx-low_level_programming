/**
 * pop_listint - deletes the head node of a linked list and returns its data.
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
