#include "lists.h"

/**
* insert_dnodeint_at_index - add node at index
* @h: pointer to pointer to dlinked list
* @idx: index to add at
* @n: number to add
* Return: new node or null if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *head = *h, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == 0)
		return (0);

	new->n = n;
	if (*h == 0)
	{
		new->prev = 0;
		new->next = NULL;
		*h = new;
		return (*h);
	}
	while (head != 0)
	{
		if (idx == 0)
		{
			add_dnodeint(h, n);
			break;
		}
		if (i == idx)
		{
			new->next = head->next;
			head->next->prev = new;
			head->next = new;
			new->prev = head;
		}
		i++;
		head = head->next;
	}
	if (idx == i)
		add_dnodeint_end(h, n);

	if (idx > i)
		return (0);
	return (new);
}
