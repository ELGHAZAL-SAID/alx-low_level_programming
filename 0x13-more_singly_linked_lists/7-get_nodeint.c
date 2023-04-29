#include "lists.h"

/**
* get_nodeint_at_index - get nth node of a listint_t linked list
* @head: linked list
* @index: index of the node
* Return: nalue of the node else 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != 0)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (0);
}
