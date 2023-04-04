#include "lists.h"
#include <stdio.h>

/**
 * print_listint - ...
 * @h: pointer to head
 *
 * Return: number of nodes in list_t
 */


size_t print_listint(const listint_t *h)
{
	size_t total_nodes = 0;

	while (h != NULL)
	{
		total_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (total_nodes);
}
