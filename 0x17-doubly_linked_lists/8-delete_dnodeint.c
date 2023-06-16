#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head
 * @index: index of node to delete
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/*create a temp node to move through the list*/
	dlistint_t *temp_node, *next_node, *prev_node;
	unsigned int x;

	if (*head == NULL)
		return (-1);
	temp_node = *head;
	for (x = 0; x < index; x++)
	{
		if (temp_node->next == NULL)
			return (-1);
		temp_node = temp_node->next;
	}
	next_node = temp_node->next;
	prev_node = temp_node->prev;
	if (next_node != NULL)
		next_node->prev = prev_node;
	if (prev_node != NULL)
		prev_node->next = next_node;
	if (temp_node == *head)
		*head = next_node;
	free(temp_node);
	return (1);
}
