#include "main.h"
/**
 * reverse_array- reverse array of integers
 *
 * @a :array of integers
 * @n :number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x, i;

	x = 0;
	while (x < n)
	{
		n--;
		i = a[x];
		a[x] = a[n];
		a[n] = i;
		x++;
	}
}
