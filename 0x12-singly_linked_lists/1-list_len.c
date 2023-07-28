#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in linked list
 * @h: pointer to list_t list
 * Return: number of elemesnts in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
