#include "search_algos.h"
#include <math.h>

/**
 * min - finds the minimum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: minimum of a and b
*/

size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}


/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size), prev = 0;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

	while (prev <= min(size - 1, i))
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
