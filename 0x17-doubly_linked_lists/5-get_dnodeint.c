#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a linked list
* @head: pointer to dlinked list
* @index: index of the nude
* Return: nth node else null
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = head;

	while (h != 0)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (0);
}
