#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - this is the function frees linked list and sets
 * head to NULL.
 *@head: this is pointer to the pointer to the head of the linked list.
 *Return: this returns 0.
 */

void free_listint2(listint_t **head)
{

	listint_t *node_current, *node_next;


	if (head == NULL || *head == NULL)
		return;

	node_current = *head;

	while (node_current != NULL)
	{
		node_next = node_current->next;
		free(node_current);
		node_current = node_next;
	}
	*head = NULL;
}
