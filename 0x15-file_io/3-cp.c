#include "main.h"
#define BUFFER_SIZE 1024
/**
 * print_error - prints an error
 * @code: error code
 * @message: error message
 * @arg: argument
 */
void print_error(int code, const char *message, char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * main - creates a copy of the cp command
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int copied_file, new_file, read_bytes = 0, write_check;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", NULL);
	copied_file = open(argv[1], O_RDONLY);
	if (copied_file == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	new_file = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (new_file == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	while ((read_bytes = read(copied_file, buffer, BUFFER_SIZE)) > 0)
	{
		write_check = write(new_file, buffer, read_bytes);
		if (write_check == -1)
			print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (read_bytes == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(new_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", new_file);
		exit(100);
	}
	if (close(copied_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copied_file);
		exit(100);
	}
	return (0);
}
