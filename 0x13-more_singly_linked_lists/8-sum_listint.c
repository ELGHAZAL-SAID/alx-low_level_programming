#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n)
* @head: linked list
* Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
