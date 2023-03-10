#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i = 0, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]);
		while (j > 0)
		{
			i++;
			if ((j - 25) >= 0)
			{
				j -= 25;
				continue;
			}
			if ((j - 10) >= 0)
			{
				j -= 10;
				continue;
			}
			if ((j - 5) >= 0)
			{
				j -= 5;
				continue;
			}
			if ((j - 2) >= 0)
			{
				j -= 2;
				continue;
			}
			j--;
		}
		printf("%d\n", i);
	}
	return (0);
}
