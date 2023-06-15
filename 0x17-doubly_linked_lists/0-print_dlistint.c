#include "lists.h"

/**
* print_dlistint - print the elements of a dlinkedlist
* @h: pointer to dlinkedlist
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}

	return (i);
}
