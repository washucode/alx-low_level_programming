#include "main.h"

/**
 * flip_bits - count number of bit to flip
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	unsigned long  int diff = n ^ m;

	while (diff != 0)
	{
		counter += (diff & 1);
		diff >>= 1;
	}
	return (counter);
}
