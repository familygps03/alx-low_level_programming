#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - this is a function that frees a linked list.
 *@head: this is the pointer to the pointer of the linked list
 *Return: this returns 0;
 */

void free_listint(listint_t *head)
{

	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
