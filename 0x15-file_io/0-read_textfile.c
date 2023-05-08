#include "main.h"
/**
 * read_textfile - function to read file
 * @filename: pointer to name of file
 * @letters: number of letters to read and output
 *
 * Return: number of letters read or NULL or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, read_byte, write_byte;
	char *buf;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	read_byte = read(file_d, buf, letters);
	write_byte = write(STDOUT_FILENO, buf, read_byte);

	if (write_byte == -1 || write_byte != read_byte)
	{
		close(file_d);
		free(buf);
		return (0);
	}
	close(file_d);
	free(buf);
	return (write_byte);
}
