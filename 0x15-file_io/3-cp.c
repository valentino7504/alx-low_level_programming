#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - creates a copy of the cp command
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int copied_file, new_file, read_bytes = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copied_file = open(argv[1], O_RDONLY);
	if (copied_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	new_file = open(argv[2], O_TRUNC | O_RDWR | O_CREAT, 0665);
	while ((read_bytes = read(copied_file, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(new_file, buffer, read_bytes) == -1)
		{
			dprintf(2, "Can't write to %s", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1 || new_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(new_file) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", new_file);
		exit(100);
	}
	if (close(copied_file) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", copied_file);
		exit(100);
	}
	return (0);
}
