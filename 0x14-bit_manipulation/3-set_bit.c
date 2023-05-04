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
	/*check out of bounds error*/
	if (index > 32)
		return (-1);
	/*check if bit is already set*/
	if (*n & (1 << index))
		return (1);
	/*set bit*/
	*n = *n | (1 << index);
	return (1);
}
