#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located or NULL if value
 * is not present in head or if head is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j = sqrt(size), k;
	listint_t *head = list;

	if (list == NULL)
		return (NULL);

	while (i < size && list->n < value)
	{
		i += j;
		for (k = 0; k < j && list->next != NULL; k++)
			list = list->next;
		printf("Value checked at index [%lu] = [%d]\n", i, list->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - j, i);
	for (k = i - j; k < size && head->n < value; k++)
	{
		printf("Value checked at index [%lu] = [%d]\n", k, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
