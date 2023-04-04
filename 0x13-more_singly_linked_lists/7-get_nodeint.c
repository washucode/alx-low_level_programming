#include "lists.h"

/**
 * get_nodeint_at_index - gets node at index
 * @head: pointer to head
 * @index: index of node
 *
 * Return: found node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *nth_Node = head;
	unsigned int counter = 0;


	while (nth_Node != NULL)
	{
		if (counter == index)
			return (nth_Node);
		counter++;
		nth_Node = nth_Node->next;
	}
	return (NULL);
}
