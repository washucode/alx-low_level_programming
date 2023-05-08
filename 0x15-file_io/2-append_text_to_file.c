#include "main.h"

/**
 * append_text_to_file - function to append text to file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, d = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[d] != '\0')
		d++;

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	write(file_d, text_content, d);

	return (1);
}
