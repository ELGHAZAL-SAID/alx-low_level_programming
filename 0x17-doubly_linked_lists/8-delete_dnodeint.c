#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at index
* @head: pointer to pointer to dlinked list
* @index: index to delete at
* Return: 1 on success, -1 on fialer
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = h->next;
		if (h->next != NULL)
			h->next->prev = NULL;
		free(h);
		return (1);
	}
	while (h != 0 && index > i)
	{
		if (index == i + 1)
		{
			h->prev->next = h->next;
			if (h->next != NULL)
				h->next->prev = h->next;
			free(h);
			return (1);
		}
		i++, h = h->next;
	}
	return (-1);
}
