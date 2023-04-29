#include "lists.h"

/**
* free_listint - free a linked list
* @head: list to free.
* Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != 0)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
