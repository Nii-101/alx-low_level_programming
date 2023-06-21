#include "main.h"

/**
 * _isalpha - checks if a letter is lowercase of uppercase
 *
 * @c: is the letter being checked
 *
 * Return: 1 if the letter is lowercase or uppercase OR 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
