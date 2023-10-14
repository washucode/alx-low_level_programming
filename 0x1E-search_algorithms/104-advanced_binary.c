#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
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
		{
			if (array[k - 1] == value)
				j = k;
			else
				return (k);
		}
	}
	return (-1);
}
