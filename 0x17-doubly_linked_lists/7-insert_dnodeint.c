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
	new->next = NULL;
	new->prev = NULL;
	if (*h == 0 && idx == 0)
	{
		*h = new;
		return (new);
	}
	while (head != 0 && idx > i)
	{
		if (head->next == NULL && idx == i + 1)
		{
			head->next = new;
			new->prev = head;
			return (new);
		}
		i++, head = head->next;
	}
	if (head == NULL && i < idx)
	{
		free(new);
		return (0);
	}
	if (head->prev == NULL)
		*h = new;
	else
		new->prev->next = new, new->prev = head->prev;
	new->next = head;
	head->prev = new;
	return (new);
}
