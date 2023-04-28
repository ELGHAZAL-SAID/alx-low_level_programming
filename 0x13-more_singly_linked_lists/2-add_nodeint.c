#include "lists.h"

/**
* add_nodeint - add a node to the beginning of linked list
* @head: linked list
* @n: number to add
* Return: adddress of the new node of NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == 0)
	{
		free(tmp);
		return (0);
	}

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
