#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - create a file and write into it
 *
 * @filename: the name of the file to create or read
 * @text_content: the text to write in the new file
 *
 * Return: 1 if the function work as intended overwise return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fb;
	size_t byte_content;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		while (text_content[byte_content])
		{
			byte_content++;
		}
		if (fb == -1)
		{
			return (-1);
		}
		if (write(fb, text_content, byte_content) == -1)
		{
			return (-1);
		}
	}
	if (close(fb) == -1)
	{
		return (0);
	}
	return (1);

}
