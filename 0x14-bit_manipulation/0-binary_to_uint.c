#include "main.h"

/**
 * binary_to_uint - covert binary string to int
 * @b: binary string to convert
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  bit_int = 0;

	while (*b != '\0')
	{
		if (*b < '0' || *b > '1')
			return (0);
		bit_int = 2 * bit_int + (*b++ - '0');
	}
	return (bit_int);
}
