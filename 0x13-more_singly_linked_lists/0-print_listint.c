#include "lists.h"

/**
* print_listint - print all list items
* @h: linked list
* Return: number of nudes
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		printf("(nil)");
		return (0);
	}
	while (h != 0)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}