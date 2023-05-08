#include "main.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of args
 *
 * Return: 0 / error
*/

int main(int argc, char *argv[])
{
	int init_file, dest_file, buff_size = 1024, size2 = 0;
	char fbu[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (98);
	}
	init_file = open(argv[1], O_RDONLY);
	if (init_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(init_file), exit(99);
	}
	while (buff_size == 1024)
	{
		buff_size = read(init_file, fbu, buff_size);
		if (buff_size == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
		size2 = write(dest_file, fbu, buff_size);
		if (size2 < buff_size)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(init_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", init_file), exit(100);
	if (close(dest_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file), exit(100);
	return (0);
}

