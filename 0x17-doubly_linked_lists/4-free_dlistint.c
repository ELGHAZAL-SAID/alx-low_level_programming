#include "lists.h"

/**
* free_dlistint - free dlinked list
* @head: pointer to linked list
* Return: non
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
