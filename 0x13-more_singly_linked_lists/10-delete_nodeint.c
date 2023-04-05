#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deletedNode, *holder;

	if (head == NULL || *head == NULL )
		return (-1);

	if (index == 0)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
		return (1);
	}
	deletedNode = *head;
	while (--index > 0)
	{
		if (deletedNode->next == NULL)
			return (-1);
		deletedNode = deletedNode->next;
	}
	holder = deletedNode->next;
	deletedNode->next = holder->next;
	free(holder);
	return (1);
}
