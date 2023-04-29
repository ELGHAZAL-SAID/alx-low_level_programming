#include "lists.h"

/**
* pop_listint - deletes teh head of a node
* @head: the linked list
* Return: 0 if head is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *p;

	if (*head == 0)
		return (0);

	p = *head;
	free(*head);
	*head = p->next;

	return (p->n);

}
