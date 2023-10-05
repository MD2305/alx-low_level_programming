#include "main.h"
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - checks if files can be opened.
 * @exit_code: exit.
 * @error_message: error.
 * @arg: arguments vector.
 * Return: no return.
 */
void print_error_and_exit(int exit_code, const char *error_message, const char *arg)
{
	dprintf(STDERR_FILENO, error_message, arg);
	exit(exit_code);
}

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return 0;
}
