#include "main.h"

/**
 *factorial- returns the factorial of the number
 *
 *@n: the number
 *
 *Return: -1 for error i.e if n < 0 || factorial of the number.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
