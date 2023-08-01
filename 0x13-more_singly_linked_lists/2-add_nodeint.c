#include "lists.h"

/**
 * add_nodeint - addition of  new node at the start of a linked list
 * @head: pointer to first node in list
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, or if it fails then NULL
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
