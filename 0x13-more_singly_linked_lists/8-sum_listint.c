#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - this function returns the sum of all data(n)
 * of the linked list
 *@head: this is the pointer to the head of the linked list
 *Return: This returns the sum of the data (n) of the linked
 *list or zero when empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
