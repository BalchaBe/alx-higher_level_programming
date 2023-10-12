#include "lists.h"
/**
 * show us the sum of all the data (n) in a DLL
 * a pointer to the head of the DLL
 * the sum of all data of the DLL or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	/* traverse the list and add each node value */
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
