#include "lists.h"

/**
 * delete_dnodeint_at_index - this function deletes the node at
 * index index of a dlistint_t linked list
 *
 * @head: this is the variable of first element
 * @index: elements number
 *
 * Return: it returns error code
 *
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *current;
	unsigned int m = 0;

	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		current->prev = NULL;
		free(current);

		return (1);
	}

	while (m < index)
	{
		before = current;
		if (current->next == NULL)
			return (-1);

		current = current->next;
		m++;
	}
	before->next = current->next;

	if (current->next != NULL)
		current->next->prev = before;
	free(current);

	return (1);
}
