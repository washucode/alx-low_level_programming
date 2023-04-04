#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a node at the end of a list
 *
 * @head: pointer to head
 * @n: data to be added
 *
 * Return: address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode, *curNode;

	lastNode = malloc(sizeof(listint_t));

	if (lastNode == NULL)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;


	if (*head == NULL)
		*head = lastNode;
	else
	{
		curNode = *head;
		while (curNode->next != NULL)
			curNode = curNode->next;
		curNode->next = lastNode;
	}
	return (lastNode);
}
