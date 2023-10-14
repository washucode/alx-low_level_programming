#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, k;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (k = i; k < j; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		k = (i + j) / 2;
		if (array[k] < value)
			i = k + 1;
		else if (array[k] > value)
			j = k - 1;
		else
			return (k);
	}
	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	j = i / 2;
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);

	return (binary_search(array + j, i - j + 1, value) + j);
}
