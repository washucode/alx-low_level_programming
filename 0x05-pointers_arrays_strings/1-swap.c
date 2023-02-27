#include "main.h"

/**
 *swap_int - swaps value of two integers
 *
 * @a : first int
 * @b : 2nd int
 *
 */

void swap_int(int *a, int *b)
{
	int x = 0;

	x =  *a;
	*a  = *b;
	*b  = x;
}
