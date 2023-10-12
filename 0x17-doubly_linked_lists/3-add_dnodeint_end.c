#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a DLL
 * double pointer to the beggining of the list
 * content of the new node to be add
 * the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *l_node;
	dlistint_t *addrs_new_node;

	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	/* add data to addrs_new_node */
	addrs_new_node->next = NULL;
	addrs_new_node->n = n;
	/* make last_node the head to traverse the list till the end */
	l_node = *head;
	if (l_node == NULL)
	{
		/* if the list is null */
		/* addrs_new_node becomes the head of the list*/
		addrs_new_node->prev = NULL;
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	/* else, traverse till last node */
	while (l_node->next != NULL)
		l_node = last_node->next;
	/* when we get the end of the list change next of last_node*/
	/* with the new_node */
	l_node->next = addrs_new_node;
	addrs_new_node->prev = l_node;
	return (addrs_new_node);
}
