
#include "lists.h"

/**
 * add_nodeint_end - It adds a node to the end of a linked list
 *
 *  @n:Is the data that should be inserted in the new element
 *
 *@head: A pointer to the first element of the linked list
 *
 * Return:Returns a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

