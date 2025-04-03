#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copy a file into a another file or a new file
 *
 * @nb_args: number of argument
 * @args: arguments
 *
 * Return: always 0 but can exit
 * 97 if the number of parameter is not 3
 * 98 if can t read a file
 * 99 if can t write a file
 * 100 if can not close the file open
 */
int main(int nb_args, char **args)
{
	char buffer[1024];
	ssize_t write_result = 1, to_write = 1;
	int close_val, file_from, file_to;

	if (nb_args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(args[1], O_RDONLY, 0600);
	file_to = open(args[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	to_write = read(file_from, buffer, sizeof(buffer));
	while (to_write > 0)
	{
		write_result = write(file_to, buffer, to_write);
		if (write_result == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
			exit(99);
		}
		to_write = read(file_from, buffer, sizeof(buffer));
	}
	if (file_from == -1 || to_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	close_val = close(file_from);
	if (close_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", close_val);
		exit(100);
	}
	close_val = close(file_to);
	if (close_val == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close %d\n", close_val);
		exit(100);
	}
	return (0);
}
