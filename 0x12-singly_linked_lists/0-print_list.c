#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all linked list elements
 * @h:a  pointer to which list_t list should be printed
 *
 * Return:returns the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		v++;
	}

	return (v);
}

