#include "lists.h"

/**
 * dlistint_len - this is the number of elements in a linked dlistint_t list
 * @h: this is the list to browse
 *
 * Return: this is the size of the list
 *
 **/

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (dlistint_len(h->next) + 1);
}
