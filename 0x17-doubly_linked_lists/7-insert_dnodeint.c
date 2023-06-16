#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head
 * @idx: index of the list where the new node should be added
 * @n: data to be added
 *
 * Return: address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/*create a new node*/
	dlistint_t *new_n;
	/*create a temp node to move through the list*/
	dlistint_t *temp;
	unsigned int i;

	/*allocate memory for the new node*/
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	/*initialize the new node*/
	new_n->n = n;
	new_n->next = NULL;
	new_n->prev = NULL;
	/*if the list is empty*/
	if (*h == NULL)
	{
		*h = new_n;
		return (new_n);
	}
	/*if the list is not empty*/
	temp = *h;
	for (i = 0; i < idx; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_n->next = temp->next;
	new_n->prev = temp;
	temp->next = new_n;
	return (new_n);
}
