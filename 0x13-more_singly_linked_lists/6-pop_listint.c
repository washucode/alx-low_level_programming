#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 *
 * @head : pointer to node
 *
 * Return: head nodes data(n)
 */


int pop_listint(listint_t **head)
{
	listint_t *tempNode = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	free(tempNode);
	return (data);
}
