#include "lists.h"

/**
 * reverse_listint - ...
 * @head: ...
 * Return: ...
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = cur;
		cur = *head;
		*head = n;
	}
	*head = cur;
	return (*head);
}
