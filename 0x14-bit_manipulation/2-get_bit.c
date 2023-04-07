#include "main.h"

/**
 * get_bit - get bit at index
 * @n :bits to check
 * @index : index of bit
 * Return: bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >=  32) /*check for out of bounds error*/
		return (-1);
	return ((n >> index) & 1); /*return 1 or 0*/
}
