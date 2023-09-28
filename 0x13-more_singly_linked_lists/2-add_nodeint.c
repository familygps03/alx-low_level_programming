#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * add_nodeint - this is function that add a new node at the
 * beginning of the linked list
 *@head: this is the pointer to the pointer of the head of the linked list
 *@n: this is the data of the linked list
 *Return: this returns the address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->next = *head;
	*head = node_new;
	return (node_new);
}
