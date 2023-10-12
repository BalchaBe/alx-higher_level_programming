#include "lists.h"
/**
 * free_dlistint - free a DLL
 * pointer to the head of the DLL
 * nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux_head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux_head = head;
		head = head->next;
		free(aux_head);
	}
	free(head);
}
