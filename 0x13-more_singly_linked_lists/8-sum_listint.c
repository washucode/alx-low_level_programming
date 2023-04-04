#include "lists.h"

/**
 * sum_listint- sum all data(n) of a list
 *
 * @head: pointer to head
 *
 * Return: sum or 0
 */


int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}




