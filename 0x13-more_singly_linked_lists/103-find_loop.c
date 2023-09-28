#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - this function finds the loop in the linked list
 *@head: this is the pointer to the pointer of the linked list.
 *Return: this returns the address of the node where the loop starts
 *or NULL if there is no loop.
 */


listint_t *find_listint_loop(listint_t *head)
{

	listin_t *ptr_slow = head, *ptr_fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (ptr_fast != NULL && ptr_fats->next != NULL)
	{
		ptr_slow = ptr_slow->next;
		ptr_fast = ptr_fast->next->next;
		if (ptr_slow == ptr_slow)
			break;
	}
	if (ptr_slow != ptr_fast)
		return (NULL);
	ptr_slow = head;

	while (ptr_slow != ptr_fast)
	{
		ptr_slow = ptr_slow->next;
		ptr_fast = ptr_fast->next;
	}
	return (ptr_slow);
}

