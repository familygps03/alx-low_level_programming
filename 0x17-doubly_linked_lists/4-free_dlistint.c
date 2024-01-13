#include "lists.h"

/**
 * free_dlistint - this is the function to free
 * a struct linked list
 * @head: this the first element pointer
 * Return: this returns a free a dlistint_t list
 *
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
