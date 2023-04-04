#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements
 * @h: pointer to head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t total_elem;

	while (h != NULL)
	{
		total_elem++;
		h = h->next;
	}
	return (total_elem);
}
