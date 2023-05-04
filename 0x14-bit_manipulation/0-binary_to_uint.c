#include "main.h"

/**
 * binary_to_uint - convert binary to string
 * @b: pointer to binary to convert
 *
 * Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int intbit = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b < '0' || *b > '1')
			return (0);
		intbit = 2 * intbit + (*b++ - '0');
	}
	return (intbit);
}
