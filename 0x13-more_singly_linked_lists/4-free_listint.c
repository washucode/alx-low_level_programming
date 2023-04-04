#include "lists.h"

/**
 * free_listint - frees list
 * @head:  pointer to head
 */

void free_listint(listint_t *head)
{
	list_t *curNode;

	while (head != NULL)
	{
		curNode = head->next;
		free(head->n);
		free(head);
		head = curNode;
	}
}
