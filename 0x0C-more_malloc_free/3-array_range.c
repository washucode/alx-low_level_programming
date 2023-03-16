#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int *arr_mal;
	int  x, len2;

	if (min > max)
		return (NULL);

	len2 = ((max + 1) - min);
	arr_mal = malloc(sizeof(int) * len2);

	if (arr_mal == NULL)
		return (NULL);

	for (x = 0; x < len2 ; x++)
		*(arr_mal + x) = min + x;
	return (arr_mal);

}


