#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - ...
 * @s: ...
 *
 * Return: ...
 */
int (*get_op_func(char *s))(int, int)
{
	op_t options[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, options[i].op) == 0)
			return (options[i].f);	
		i++;
	}

	return (0);
}