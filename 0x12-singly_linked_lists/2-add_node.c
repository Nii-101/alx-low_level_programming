#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds  new node at start of  linked list
 *
 * @str: new string to add in the node
 *
 *@head:a double pointer to the list, (list_t)
 *
 * Return: returns  the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}

