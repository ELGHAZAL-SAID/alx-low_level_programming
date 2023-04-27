#include "lists.h"

/**
* print_list - print a linked list value
* @h: linked list to print
* Return: number of nodes
*/


size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		if (h->str == 0)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
