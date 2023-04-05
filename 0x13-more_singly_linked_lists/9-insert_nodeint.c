#include "lists.h"

/**
 * insert_nodeint_at_index- ...
 *
 * @head: pointer to head
 * @idx: index to insert
 * @n: data to add
 *
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_Node, *curNode = *head;

	new_Node = malloc(sizeof(listint_t));

	if (curNode == NULL)
		return (NULL);

	new_Node->n = n;

	if (idx == 1)
	{
		new_Node->next = *head;
		*head = new_Node;
		return (new_Node);
	}
	else
	{
		while (--idx > 0)
			curNode = curNode->next;
		new_Node->next = curNode->next;
		curNode->next = new_Node;
		return (new_Node);
	}
}
