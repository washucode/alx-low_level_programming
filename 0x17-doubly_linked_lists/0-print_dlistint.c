#include "lists.h"


/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
