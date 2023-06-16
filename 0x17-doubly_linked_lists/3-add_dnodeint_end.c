#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head
 * @n: data to be added
 *
 * Return: address new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*create a new node*/
	dlistint_t *new_n;
	/*create a temp node to move through the list*/
	dlistint_t *temp;

	/*allocate memory for the new node*/
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	/*initialize the new node*/
	new_n->n = n;
	new_n->next = NULL;
	/*if the list is empty*/
	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	/*if the list is not empty*/
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_n;
	new_n->prev = temp;
	return (new_n);
}
