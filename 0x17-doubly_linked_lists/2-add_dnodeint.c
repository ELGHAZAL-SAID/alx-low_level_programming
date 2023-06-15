#include "lists.h"

/**
* add_dnodeint - add new not the start of dlinked list
* @head: pointer to pointer of dlinkedlist
* @n: number to add
* Return: pointer to new node or null if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	return (new);
}
