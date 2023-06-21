#include "main.h"
/**
 * _islower - check for lowercase character
 *
 *@c: represents the character we are checking
 *
 * Return: 1 for lowercase characters or 0 for anything else
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
