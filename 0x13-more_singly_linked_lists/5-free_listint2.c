#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 *
 *@head : pointer to head
 *
 * Returns: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *curNode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		curNode = (*head)->next;
		free(*head);
		*head = curNode;
	}

	head = NULL;
}
