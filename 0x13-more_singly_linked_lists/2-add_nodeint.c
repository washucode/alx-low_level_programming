#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds new node at the beginning of a list
 *
 * @head: pointer to head
 * @n: data to add to new node
 *
 * Return: address or NULL
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode  = malloc(sizeof(struct listint_s));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
