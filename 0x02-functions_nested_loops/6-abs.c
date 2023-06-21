#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @c: this is the number being worked on
 *
 *abs_val: is the absolute value of the number
 *
 *Return: absolute vale of number or 0 means success.
 *
*/

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

