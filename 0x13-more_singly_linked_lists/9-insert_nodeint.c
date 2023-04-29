#include "lists.h"

/**
* insert_nodeint_at_index - insert new node at the given position
* @head: pointer to pointer of linked list
* @idx: index
* @n: new value to add to node
* Return: pointer to new linked list
*
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *prev, *h;

	h = *head;
	tmp = malloc(sizeof(listint_t));

	if (tmp == 0 || head == 0 || idx > listint_len(*head))
	{
		free(tmp);
		return (0);
	}
	tmp->n = n;
	tmp->next = NULL;

	while (h != 0)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				tmp->next = h;
				*head = tmp;
				return (tmp);
			}
			prev->next = tmp;
			tmp->next = h;
			return (tmp);
		}
		if (i == idx - 1)
		{
			prev = h;
		}

		h = h->next;
		i++;
	}
	return (0);
}
