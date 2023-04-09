#include "main.h"

/**
 * clear_bit - clear bit (unset to 0)
 *
 * @n :  bit to set
 * @index : index of the bit
 *
 * Return: -1 or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	if (*n  & (1 << index))
	{
		*n =  *n & ~(1 << index);
		return (1);
	}
	return (1);
}