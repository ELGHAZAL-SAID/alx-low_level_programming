#include "lists.h"

size_t list_len(const listint_t *h);

/**
* delete_nodeint_at_index - delete node at index of a linked list
* @head: pointer to head node
* @index: node index
* Return:1 if succeeded else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev, *h;

	if (index > list_len(*head) || list_len(*head) == 0)
		return (-1);

	while (head != 0)
	{
		if (index == i)
		{
			h = *head;
			if (i == 0)
			{
				*head = h->next;
				free(h);
				return (1);
			}
			prev->next = h->next;
			free(h);
			return (1);
		}
		else if (i == index - 1)
			prev = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
* list_len - returns the len of a linked list
* @h: linked list
* Return: 0
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
