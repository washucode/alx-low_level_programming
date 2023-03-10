#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * main -  returns the sum of argumentnts
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int  c, sum = 0;

	int x;

	int i = 1;

	if (argc < 2)
		printf("0\n");
	else
	{
		while (i < argc)
		{

			x = 0;
			c = 0;
			while (argv[i][x])
			{
				c = argv[i][x];

				if (c < '0' || c > '9')
				{
					printf("Error\n");
					return (1);
				}
				x++;
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
