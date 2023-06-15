#include "lists.h"

/**
* dlistint_len - count dlinked list elements
* @h: pointer to dlinkedlist
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}

	return (i);
}
