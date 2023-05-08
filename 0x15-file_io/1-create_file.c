#include "main.h"
/**
 * create_file - function to create file
 * @filename: name of file
 * @text_content:string to write to file
 *
 * Return: -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
	int file_d, written_bytes, t = 0;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	while (text_content[t] != '\0')
	{
		t++;
	}

	write(file_d, text_content, t);

	close(file_d);
	return (1);
}
