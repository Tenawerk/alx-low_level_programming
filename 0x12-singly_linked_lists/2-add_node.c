#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - at the start of a linked list a new node is added
 * @head: double pointer at the list_t list
 * @str: a new string added in node
 * Return: adress of new element, or if fail then NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
