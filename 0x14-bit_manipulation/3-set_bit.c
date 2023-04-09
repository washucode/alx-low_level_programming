#include "main.h"


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (*n & (1 << index))
		return (1);
	else
	{
		*n =*n | (1 << index);
		return (1);
	}
}
