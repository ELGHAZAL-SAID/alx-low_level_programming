#include "lists.h"

/**
* add_dnodeint_end - add new not the end of dlinked list
* @head: pointer to pointer of dlinkedlist
* @n: number to add
* Return: pointer to new node or null if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = NULL;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
