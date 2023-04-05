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

	holder = *head;
	deletedNode = malloc(sizeof(listint_t));
	if (holder == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(holder);
		return (1);
	}

	while (--index > 0)
	{
		if (holder->next == NULL)
			return (-1);
		deletedNode = holder;
		holder = holder->next;
	}
	deletedNode->next = holder->next;
	free(holder);
	return (1);
}
