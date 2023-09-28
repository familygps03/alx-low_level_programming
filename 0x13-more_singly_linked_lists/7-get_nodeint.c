#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - this is the function that returns the nth
 * node of the linked list
 *@head: this is the pointer to the head of the linked list
 *@index: this is the index of the node, starting at zero
 *Return: this returns the nth node or NULL if it not available.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	while (a < index && head != NULL)
	{
		head = head->next;
		a++;
	}
	return (head);
}

