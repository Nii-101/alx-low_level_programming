#include "lists.h"

/**
 * delete_nodeint_at_index - prototype
 *
 * @head:A pointer to first element of the list
 *
 * @index:The index of the node to be deleted
 *
 * Return: Returns 1 if successful, or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		a++;
	}


	current = temporary->next;
	temporary->next = current->next;
	free(current);

	return (1);
}

