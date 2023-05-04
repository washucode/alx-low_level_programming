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
	/* Check out of bound error*/
	if (index > 32)
		return (-1);

	/*check if bit is set*/
	if (*n  & (1 << index))
	{
		/*unset bit*/
		*n =  *n & ~(1 << index);
		return (1);
	}
	return (1);
}
