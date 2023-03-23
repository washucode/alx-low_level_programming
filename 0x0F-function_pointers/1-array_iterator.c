#include "function_pointers.h"
/**
 * array_iterator - execute function on each element
 * of an array
 * @array: ....
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (array == NULL  || action == NULL)
		return;
	for (x = 0; x < (int) size ; x++)
	{
		action(array[x]);
	}
}
