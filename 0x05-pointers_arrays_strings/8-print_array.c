#include "main.h"
#include <stdio.h>

/**
 * print_array - prototype to print an array.
 * @a: the array to print.
 * @n:  length
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
