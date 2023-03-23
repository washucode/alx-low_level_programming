#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - ...
 * @n : .....
 * @...: variable arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int nsum = 0, i;

	va_list ar_pointer;

	va_start(ar_pointer, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		nsum += va_arg(ar_pointer, int);
	va_end(ar_pointer);
	return (nsum);
}
