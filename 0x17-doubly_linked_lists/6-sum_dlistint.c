#include "lists.h"


/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head
 *
 * Return: sum of all the (n) or 0
 */

int sum_dlistint(dlistint_t *head)
{
	/*create a temp node to move through the list*/
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;

		temp = temp->next;
	}

	return (sum);
}
