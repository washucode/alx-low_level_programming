#include <stdlib.h>
/**
 *create_array - function that creates an array of chars & initializes
 * with specific char.
 * @size : size of array
 * @c : char value to intialize array
 * Return:  pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return ('\0');


	x = malloc(size);

	if (x == NULL)
		return ('\0');

	for (y = 0 ; y < size ; y++)
		x[y] = c;
	x[size] = '\0';
	return (x);
}

