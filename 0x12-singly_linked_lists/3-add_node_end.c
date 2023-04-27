#include "lists.h"

/**
* add_node_end - add node to the end of a linked list
* @head: head of the list
* @str: string to add
* Return: the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *h = *head;

	tmp = malloc(sizeof(list_t));

	if (str == 0 || tmp == 0)
	{
		free(tmp);
		return (0);
	}

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;

	if (*head == 0)
	{
		*head = tmp;
		return (tmp);
	}

	while (h->next != 0)
		h = h->next;
	h->next = tmp;
	return (tmp);
}



