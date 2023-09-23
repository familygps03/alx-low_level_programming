#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - this is the function that adds a new node at the
 *begining of the list
 *@head: the pointer at the first node of the singly linked list
 *@str: the pointer to the singly linked list
 *Return: this returns address of the new element or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	size_t length = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	new_node->len = length;
	return (new_node);
}
