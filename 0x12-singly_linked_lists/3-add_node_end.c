#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to the ending of linked list
 *
 * @str: string to be added into the new node
 *
 *@head:a  double pointer to the list, (list_t)
 *
 *Return:returns the address of the new element if successful,or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = n;

	return (n);
}


