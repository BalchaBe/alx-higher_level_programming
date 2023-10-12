#include "lists.h"
/**
 * show us the nth node of a DLL
 * a pointer to the head of the DLL
 * index of the node to return its value (main = index 5 = 98)
 * value of the node in the index or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t_index;
	unsigned int id_run;

	if (head == NULL)
		return (NULL);

	t_index = head;
	/* copy list's content to current_index */
	head->n = t_index->n;
	id_run = 0;

	while (t_index != NULL)
	{
		/* when we get the given index (5) return its value */
		/* otherwise keeps running through the list */
		if (id_run == index)
			return (t_index);
		id_run++;
		t_index = t_index->next;
	}
	/* if node at given index doesn't exist */
	return (NULL);
}
