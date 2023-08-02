#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a linked list.
 *
 * @head: Pointer to the pointer of the first node in the list.
 *
 * @n: The data to insert into new node.
 *
 * Return: Returns the pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
