#include "list.h"

/**
 * print_listint - print all elements of linked list
 * @h: linked list of type listint_t to print
 *
 * Return: no. of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
