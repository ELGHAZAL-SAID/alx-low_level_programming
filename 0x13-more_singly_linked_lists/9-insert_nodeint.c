#include "lists.h"

size_t list_len(const listint_t *h);

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

	if (tmp == 0 || head == 0 || idx > list_len(*head))
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
			tmp->next = prev->next;
			prev->next = tmp;
			return (tmp);
		}
		else if (i == idx - 1)
			prev = h;

		h = h->next;
		i++;
	}
	return (0);
}

/**
* list_len - returns the len of a linked list
* @h: linked list
* Return: 0
*
*/

size_t list_len(const listint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}

