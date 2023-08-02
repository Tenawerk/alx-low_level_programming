#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: data inside the elements that was deleted,
 * or if the list is empty then 0
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
