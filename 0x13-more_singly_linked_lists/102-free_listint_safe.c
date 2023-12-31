#include "lists.h"

/**
 * free_listint_safe - Frees up a linked list
 *
 * @h: A pointer to the first node of the linked list
 *
 * Return:Returns the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dif;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

return (length);
}

