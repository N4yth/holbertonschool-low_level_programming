#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text into a file
 *
 * @filename: the name of the file to modify
 * @text_content: the text to write at the end
 *
 * Return: 1 if the function work as intended overwise return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fb;
	ssize_t byte_content = 0, write_result = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_WRONLY | O_APPEND, 0600);

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
