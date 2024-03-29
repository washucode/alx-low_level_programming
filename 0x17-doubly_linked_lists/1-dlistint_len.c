#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: no of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
