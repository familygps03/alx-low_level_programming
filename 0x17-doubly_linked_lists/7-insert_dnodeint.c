#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - this is the function inserts a new
 * node at a given position
 * @h: this is the  double pointer to the beginning of the linked list
 * @idx: this is the  index at which to insert the new node
 * @n: this is the  data to enter into new node
 * Return: this is the pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int m;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (m = 0; m < idx - 1 && current != NULL; m++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
