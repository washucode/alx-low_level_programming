#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry
 * @argc: no of arguments
 * @argv: array fo arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*oprtn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprtn = get_op_func(argv[2]);

	if (!oprtn)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprtn(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
