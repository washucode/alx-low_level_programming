#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc, and initializes to 0
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 * Return: pointer to the allocated memory  or
 * NULL if @nmemb or @size is 0 or
 * NULL if insufficient memory was available
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *mem_All;

	if (nmemb == 0 || size == 0)
		return ('\0');
	mem_All = malloc(nmemb * size);
	if (mem_All == NULL)
		return ('\0');
	for (x = 0; x < nmemb * size ; x++)
		mem_All[x] = 0;
	return ((void *)mem_All);
}
