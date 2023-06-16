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
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/*
	* create a temp node to move through the list
	* assign the head to the temp node
	*/
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	/*store the data*/
	new_node->n = n;
	/*if the list is empty*/
	if (*head == NULL)
	{
		/*assign the new node to the head*/
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	/* move through the list*/
	while (temp->next != NULL)
		temp = temp->next;
	/*assign the new node to the last node*/
	new_node->next = NULL;
	new_node->prev = temp;
	temp->next = new_node;
	return (*head);
}
