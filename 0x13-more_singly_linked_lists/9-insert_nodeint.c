#include "lists.h"

/**
 *insert_nodeint_at_index-Inserts new node in linked list at specific position
 * @head: A pointer to the first node of the list
 *
 *  @n: The data to insert into the new node
 *
 *@idx:Is the index for the new node to be added
 *
 * Return:Returns a pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; temporary && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = temporary->next;
			temporary->next = new;
			return (new);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}
