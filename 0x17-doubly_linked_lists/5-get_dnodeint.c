#include "lists.h"

/**
 * get_dnodeint_at_index - this is the function of the nth node
 * of a dlistint_t linked list
 * @head: this is the pointer of the first element
 * @index: this index of the elements number
 * Return: this returns a node
 *
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int circle_c = 0;

	while (head != NULL)
	{
		if (index == circle_c)
			return (head);
		head = head->next;
		circle_c++;
	}

	return (NULL);
}
