#include "main.h"
/**
 *_isupper - checks for uppercase
 *
 *@c: The character being computed
 *
 *Return: returns 1 or 0 depending on case of the character
 *
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
