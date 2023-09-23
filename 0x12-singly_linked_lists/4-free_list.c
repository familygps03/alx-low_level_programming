#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - this is the function that frees singly linked list
 *@head: this is the pointer to the singly linked list
 *Return: there is no return
 */

void free_list(list_t *head)
{
	list_t *temp_variable;

	temp_variable = head;

while (head != NULL)
{
temp_variable = head;
head = head->next;
free(temp_variable->str);
free(temp_variable);
}
free(head);
}
