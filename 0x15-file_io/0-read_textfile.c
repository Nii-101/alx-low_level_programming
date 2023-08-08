#include "main.h"
#include <stdlib.h>

/**
 *read_textfile- A function that reads the text file and prints it  to STDOUT.
 *
 *@filename: The text file being read and printed to STDOUT
 *
 *@letters: Represents the number of letters to be read
 *
 * Return: Returns the actual number of bytes read and printed to STDOUT
 *and 0 when function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t a;
	ssize_t c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	c = read(fd, buff, letters);
	a = write(STDOUT_FILENO, buff, c);

	free(buff);
	close(fd);
	return (a);
}
