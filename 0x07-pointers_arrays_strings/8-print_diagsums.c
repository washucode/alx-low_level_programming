#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints diagonal sum
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0, s1 = 0,  s2 = 0;

	while (i < size)
	{
		s1 += *(a + (size * i  + i));
		s2 += *(a + (size  * i + size - 1 - i));
		i++;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
