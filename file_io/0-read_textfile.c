#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read and write a texte file
 *
 * @filename: the name of the file to read
 * @letters: the number of letter to print
 *
 * Return: the number of char printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb;
	ssize_t num, resu;
	char buf[2048];

	if (filename == NULL)
	{
		return (0);
	}
	fb = open(filename, O_RDONLY, 400);
	if (fb == -1)
	{
		return (0);
	}
	num = read(fb, buf, letters);
	if (num == -1)
	{
		return (0);
	}
	resu = write(STDOUT_FILENO, buf, num);
	if (resu == -1)
	{
		return (0);
	}
	if (close(fb) == -1)
	{
		return (0);
	}
	return (resu);

}
