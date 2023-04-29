#include "lists.h"

/**
* add_nodeint_end - add a node to the end of linked list
* @head: linked list
* @n: number to add
* Return: adddress of the new node of NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *h;

	h = *head;

	tmp = malloc(sizeof(listint_t));

	if (tmp == 0)
	{
		free(tmp);
		return (0);
	}

	tmp->n = n;
	tmp->next = NULL;

	if (*head == 0)
	{
		*head = tmp;
		return (0);
	}

	while (h->next != 0)
		h = h->next;

	h->next = tmp;

	return (tmp);

}
