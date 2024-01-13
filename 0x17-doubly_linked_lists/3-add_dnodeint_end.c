#include "lists.h"

/**
 * add_dnodeint_end - this is the adds a new node at the
 * end of a dlistint_t list
 * @head: this is the first element
 * @n: this is the number pointer
 * Return: this returns new node
 *
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *temp;

	nw = NULL;
	temp = *head;

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
	{
		return (NULL);
	}

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		nw->prev = temp;
		temp->next = nw;
	}

	return (nw);
}
