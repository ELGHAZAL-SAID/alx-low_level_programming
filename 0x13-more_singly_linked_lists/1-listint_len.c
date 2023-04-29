#include "lists.h"

/**
* listint_len - returns the len of a linked list
* @h: linked list
* Return: 0
*
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
