#include "function_pointers.h"
/**
 * int_index - ..
 * @array: ..
 * @size: ..
 * @cmp : ..
 * Return: 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]) == 1)
			return (ind);
	}
	return (-1);
}
