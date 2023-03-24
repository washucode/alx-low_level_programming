#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void (*get_func(char type))(va_list *);
void print_c(va_list *arg);
void print_i(va_list *arg);
void print_f(va_list *arg);
void print_s(va_list *arg);

/**
 * print_all - prints anything(any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *s = "";

	va_list ar_p;

	void (*get_ptr)(va_list *);

	va_start(ar_p, format);

	while (format && format[i] != '\0')
	{
		get_ptr = get_func(format[i]);

		if (get_ptr)
		{
			printf("%s", s);
			get_ptr(&ar_p);
			s = ", ";
		}

		i++;
	}
	va_end(ar_p);
	printf("\n");
}



/**
 * get_func - gets g function of format type
 * @type: format type
 * Return: pointer to function (SUCCESS) or
 * NULL (FAILURE)
 */

void(*get_func(char type))(va_list *)
{
	opt_l f_arr[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	int i = 0;

	while (f_arr[i].format  !=  '\0')
	{
		if (f_arr[i].format == type)
			return (f_arr[i].f);
		i++;
	}
	return (NULL);
}



/**
 * print_c - prints a char
 * @arg: pointer to a char
 */

void print_c(va_list *arg)
{
	printf("%c", va_arg(*arg, int));
}

/**
 * print_i - prints an int
 * @arg: pointer to int
 */

void print_i(va_list *arg)
{
	printf("%d", va_arg(*arg, int));
}

/**
 * print_f - prints a float data type
 * @arg: pointer to float
 */

void print_f(va_list *arg)
{
	printf("%f", va_arg(*arg, double));
}

/**
 * print_s - prints a string
 * @arg: pointer to string
 */

void print_s(va_list *arg)
{
	char *str[2];
	int i;

	str[0] = va_arg(*arg, char *);
	str[1] = "(nil)";
	i = str[0] == NULL;
	printf("%s", str[i]);
}


