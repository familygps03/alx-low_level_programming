#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - this is the function that prints
 *number of the in the linked list
 *@h: this is the pointer to the single linked list
 *Return: this is returns number of the elements
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{

	h = h->next;
	count++;
}
return (count);
}
