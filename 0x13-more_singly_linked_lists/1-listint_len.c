#include "lists.h"
#include <stdio.h>

/**
 * listint_len - this is the function that returns the
 * elements in the linked list
 *@h: this is the pointer to the head of the linked list
 *Return: this is returns the elements of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
