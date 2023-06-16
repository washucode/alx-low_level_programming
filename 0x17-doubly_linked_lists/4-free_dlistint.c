#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: no of elements
 */

void free_dlistint(dlistint_t *head)
{
	/*create a temp node to move through the list*/
	dlistint_t *free_n;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		free_n = head;
		head = head->next;
		free(free_n);
	}
}
