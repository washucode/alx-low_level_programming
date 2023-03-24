#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct s_format - function object
 * @format: printing format
 * @f : function
 */
typedef struct s_format
{
  char format;
  void (*f)(va_list *ar_list);
}opt_l;


#endif
