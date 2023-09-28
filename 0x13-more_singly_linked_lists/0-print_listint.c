#include "lists.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint - this is the function that prints all elements
 * of the list
 *@h: this the pointer to the head of the list
 *Return: this is returns the list of the elements
 */

size_t print_listint(const listint_t *h)
{

	size_t count = 0;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	while (h->next)
	{
		h = h->next;
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
