#include "lists.h"

/**
 * pop_listint - It deletes the head node of the linked list
 *
 * @head:A pointer to the first element of the linked list
 *
 * Return:returns the deleted data inside the elements or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (number);
}


