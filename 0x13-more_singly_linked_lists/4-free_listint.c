#include "lists.h"

/**
 * free_listint - Frees up a linked list
 *
 *  @head: The list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}

