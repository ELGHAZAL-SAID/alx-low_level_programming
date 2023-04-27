#include "lists.h"

/**
* list_len - return a linked list len
* @h: linked list
* Return: len
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
