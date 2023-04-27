#include "lists.h"

/**
* add_node - add new node to the beginneg of the linked list
* @head: linked list
* @str:value to add
* Return: address of the new element added else NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));

	if (str == 0 || tmp == 0)
		return (0);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;

	*head = tmp;

	return (*head);
}
