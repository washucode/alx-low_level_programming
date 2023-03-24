#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings
 * @separator: ..
 * @n : number of args
 * @...: variable args
 * Return: NOthing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strn;
	va_list ar_p;

	va_start(ar_p, n);

	for (i = 0; i < n && n != 0; i++)
	{
		strn = va_arg(ar_p, char *);
		if (separator != NULL && i != (n - 1))
			printf("%s%s", strn ? strn : "(nil)", separator);
		else
			printf("%s", strn ? strn : "(nil)");
	}
	printf("\n");

	va_end(ar_p);
}
