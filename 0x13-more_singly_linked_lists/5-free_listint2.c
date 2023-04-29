#include "lists.h"

/**
* free_listint2 - free a linked list
* @head: pointer to pointer of a linked list
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while ((*head) != 0)
	{
		p = (*head)->next;
		free(*head);
		(*head) = p;
	}
	*head = NULL;
}
