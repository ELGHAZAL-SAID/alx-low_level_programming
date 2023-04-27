#include "lists.h"

/**
* free_list - free a linked list
* @head: list to free
* Return: always nothing
*/

void free_list(list_t *head)
{
	list_t *n;

	while (head)
	{
		n = head->next;
		free(head->str);
		free(head);
		head = n;
	}
}
