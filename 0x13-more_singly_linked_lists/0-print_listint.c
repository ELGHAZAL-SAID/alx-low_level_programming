#include "lists.h"

/**
* print_listint - print all list items
* @h: linked list
* Return: number of nudes
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *c = h;


	while (c != 0)
	{
		printf("%d\n", c->n);
		i++;
		c = c->next;
	}
	return (i);
}
