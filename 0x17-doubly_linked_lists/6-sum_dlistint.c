#include "lists.h"

/**
 * sum_dlistint - this is the function for the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: this is the pointer for  first element
 * Return: this returns the sum of the linked list
 *
 **/

int sum_dlistint(dlistint_t *head)
{
	int product_sum = 0;


	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		product_sum += head->n;
		head = head->next;
	}

	return (product_sum);
}
