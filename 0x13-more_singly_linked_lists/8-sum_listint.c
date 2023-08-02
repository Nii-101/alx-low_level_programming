#include "lists.h"

/**
 * sum_listint -It sums up all of the data in a list
 *
 * @head: The first node of teh linked lst
 *
 * Return: Returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}

