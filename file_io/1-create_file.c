#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

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
	ssize_t byte_content = 0, write_result = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		if (fb == -1)
		{
			return (-1);
		}
		while (text_content[byte_content])
		{
			byte_content++;
		}
		if (byte_content != 0)
		{
			write_result = write(fb, text_content, byte_content);
			if (write_result == -1)
			{
				return (-1);
			}
		}
		close(fb);
	}
	return (1);

}
