#include "main.h"

/**
 * get_bit - get bit at index
 * @n: bits to check
 * @index: index of bit
 *
 * Return: bit at index  or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32) /*check Out of bounds Error*/
		return (-1);
	/*shift to the right(/2) and find LSB*/
	return ((n >> index) & 1);
}
