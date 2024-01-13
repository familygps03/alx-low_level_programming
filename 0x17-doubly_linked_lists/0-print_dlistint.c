#include "lists.h"

/**
 * print_dlistint - this function prints all the elements
 * of a dlistint_t list
 *
 * @h: this lists to browse
 * Return: returns the Size of the list
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
