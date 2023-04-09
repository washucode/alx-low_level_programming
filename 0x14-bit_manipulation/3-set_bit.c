#include "main.h"

/**
 * set_bit - set bit
 *
 *@n: bit to set
 * @index: index of bit to set
 * Return: -1 or 1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (*n & (1 << index))
		return (1);
	*n = *n | (1 << index);
	return (1);
}
