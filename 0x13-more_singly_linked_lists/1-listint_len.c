#include "lists.h"

/**
 * listint_len - should return the number of elements in linked lists
 *
 *  @h:is the type of linked list (listint_t) to traverse
 *
 * Return:returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
