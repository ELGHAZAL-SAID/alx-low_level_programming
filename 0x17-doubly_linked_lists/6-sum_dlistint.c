#include "lists.h"

/**
* sum_dlistint - sum of all data of dlinkedlist
* @head: pointer to dlinked list
* Return: sum esle 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	if (h == NULL)
		return (0);

	while (h != 0)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
