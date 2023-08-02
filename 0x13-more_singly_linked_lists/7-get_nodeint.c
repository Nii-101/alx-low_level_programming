#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at certain index of linked list
 *
 * @head: IS the first node in the linked list
 *
 * @index:The index of the node to return
 *
 * Return:Returns a pointer to the node we're looking for or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temporary = head;
	unsigned int a = 0;

	while (temporary && a < index)
	{
		temporary = temporary->next;
		a++;
	}

	return (temporary ? temporary : NULL);
}


