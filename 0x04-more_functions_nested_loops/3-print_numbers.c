#include "main.h"
/**
 * print_numbers- prints out numbers from 0 to 9
 *
 *
 * Return: returns 0
 *
*/
void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
