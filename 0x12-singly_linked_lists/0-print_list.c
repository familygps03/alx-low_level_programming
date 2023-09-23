#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - this function prints all the elements
 * the elements of the list
 *@h: this is the pointer to the list
 *Return: this returns number of nodes
 *@list_t: this the size of the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		h = h->next;
		count++;
	}
	return (count);

}
