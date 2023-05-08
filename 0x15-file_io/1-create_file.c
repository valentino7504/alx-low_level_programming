#include "main.h"
/**
 * create_file - creates a file with some content
 * @filename: the name of the file to be created
 * @text_content: the content of the file
 * Return: 1 if successful, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0, file, written_bytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[length])
		length++;
	written_bytes = write(file, text_content, length);
	if (written_bytes == -1)
		return (-1);
	if (close(file) == -1)
		return (-1);
	return (1);
}
