#include "lists.h"
/**
 * show us the number of elements in a DLL
 * a pointer to the head of the DLL
 * the number of elements in a DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	while (h)
	{
		h = h->next;
		num_of_elements = num_of_elements + 1;
	}
	return (num_of_elements);
}
