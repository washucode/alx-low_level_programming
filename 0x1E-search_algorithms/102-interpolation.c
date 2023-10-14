#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		pos = i + (((double)(j - i) / (array[j] - array[i])) *
			   (value - array[i]));
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			i = pos + 1;
		else
			j = pos - 1;
	}
	return (-1);
}
