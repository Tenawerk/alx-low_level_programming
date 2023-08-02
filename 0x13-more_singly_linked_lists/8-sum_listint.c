#include "lists.h"

/**
 * sum_listint - calculates sum of collective data in listint_t list
 * @head: first node of linked list
 *
 * Return: result
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
