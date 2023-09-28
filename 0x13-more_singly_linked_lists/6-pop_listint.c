#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - this is the function that deletes the head node
 * of the linked list
 *@head: this is the pointer to the head of the linked list
 *Return: This returns the head node's data(n) or 0 if empty.
 */

int pop_listint(listint_t **head)
{


	listint_t *v_temp;
	int h_data = 0;

	if (head == NULL || *head == NULL)
		return (0);
	v_temp = *head;
	h_data = v_temp->n;
	*head = (*head)->next;
	free(v_temp);
	return (h_data);
}
