#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: the file name
 * @text_content: the content to append
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, file, appended_bytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[length])
		length++;
	appended_bytes = write(file, text_content, length);
	if (appended_bytes == -1)
		return (-1);
	if (close(file) == -1)
		return (-1);
	return (1);
}
