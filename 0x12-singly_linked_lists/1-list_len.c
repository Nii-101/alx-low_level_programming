#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in  linked list
 * @h: points to the list, (list_t)
 *
 * Return: returns the  number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}
	return (f);
}

