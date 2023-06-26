#include "main.h"

/**
 *swap_int- swaps the value of two integers
 *
 *@a: first integer
 *
 *@b: second integer
 *
 *val: variable to hold true value of @a
 *
 *Return: void
 *
*/

void swap_int(int *a, int *b)
{
	int val = *a;

	*a = *b;
	*b = val;

}
