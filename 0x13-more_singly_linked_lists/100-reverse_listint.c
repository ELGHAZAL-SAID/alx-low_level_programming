#include "lists.h"

/**
* reverse_listint - reverse a linked list head
* @head: linked list
* Return: new linked list pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *h;

	prev = *head;
	h = (*head)->next;
	(*head)->next = NULL;

	while (h->next != 0)
	{
		*head = h;
		h = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	*head = h;
	h = (*head)->next;
	(*head)->next = prev;
	prev = *head;

	return (*head);
}
