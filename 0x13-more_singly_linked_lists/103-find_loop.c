#include "lists.h"

/**
 * find_listint_loop - Finds a loop in the linked list
 *
 * @head:The linked list to be searched for
 *
 * Return:Returns the address of the node where the loop starts if successful
 * or NULL if unsuccessful
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

