#include "main.h"
/**
 * read_textfile - reads the contents of a text file
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the length of the printed text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, write_check;
	int file, close_file;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	read_bytes = read(file, buffer, letters);
	if (read_bytes < 0)
		return (0);
	write_check = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_check != read_bytes)
		return (0);
	close_file = close(file);
	if (close_file == -1)
		return (0);
	free(buffer);
	return (read_bytes);
}
