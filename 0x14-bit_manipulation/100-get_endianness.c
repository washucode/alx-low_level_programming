#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: 0 0r 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *r = (char *)&x;

	if (*r)
		return (1);
	else
		return (0);
}
