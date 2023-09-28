#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - this function add a new node at the end of the
 * linked list
 *@head: this pointer to the pointer of the head of the linked list
 *@n: this is the data to be added to the linked list.
 *Return: this returns the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node_new, *current;

	node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node_new;
	return (node_new);
}

