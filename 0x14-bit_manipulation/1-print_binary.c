#include "main.h"

/**
 *print_binary - A function that prints the binary form of a decimal number
 *
 *@n:The number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	int a, cnt = 0;
	unsigned long int present;

	for (a = 63; a >= 0; a--)
	{
		present = n >> a;

		if (present & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}

