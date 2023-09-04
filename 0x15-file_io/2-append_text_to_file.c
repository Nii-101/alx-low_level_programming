#include "main.h"

/**
 * append_text_to_file - A function that appends text to the end of a file.
 *
 * @filename:Points to the name of the target file.
 *
 * @text_content:Is the string of text to appent to the end of the file.
 *
 * Return:Returns 1 if successful or -1 if unsuccessful.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int b, a, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	b = open(filename, O_WRONLY | O_APPEND);
	a = write(b, text_content, len);

	if (b == -1 || a == -1)
		return (-1);

	close(b);

	return (1);
}

