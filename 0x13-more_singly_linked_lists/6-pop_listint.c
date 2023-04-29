#include "lists.h"

/**
* pop_listint - deletes teh head of a node
* @head: the linked list
* Return: 0 if head is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head == 0)
		return (0);

	p = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = p;

	return (n);

}
