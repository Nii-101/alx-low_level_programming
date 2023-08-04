#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 *
 *  @c: The character to be  print
 *
 * Return: Returns 1 if successful and -1 otherwise.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

