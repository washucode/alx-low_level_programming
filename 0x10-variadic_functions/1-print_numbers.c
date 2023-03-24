#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed btwn nos
 *@n : number of arguments
 *@...: variable arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ar_pointer;

	va_start(ar_pointer, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != (n - 1))
			printf("%d%s", va_arg(ar_pointer, int), separator);
		else
			printf("%d", va_arg(ar_pointer, int));
	}
	printf("\n");
	va_end(ar_pointer);
}
