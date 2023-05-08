#include "main.h"
/**
 * read_textfile - reads the contents of a text file
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the length of the printed text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, written_bytes = 0, write_check;
	int file = open(filename, O_RDONLY);
	char *buffer;

	if (filename == NULL)
		return (0);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	while (1)
	{
		read_bytes = read(file, buffer, letters);
		if (read_bytes == 0)
			break;
		if (read_bytes == -1)
			return (0);
		if (read_bytes > 0)
		{
			write_check = write(STDOUT_FILENO, buffer, read_bytes);
			if (write_check != read_bytes)
				break;
			written_bytes += read_bytes;
		}
	}
	close(file);
	free(buffer);
	return (written_bytes);
}
