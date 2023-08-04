#include "main.h"

/**
 *flip_bits- A function that counts the number of bits to alter(change) to get
 *from one number to another
 *
 * @n: The first number
 *
 *  @m: Is the second number
 *
 * Return: Returns the number of bits to change or alter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, cnt = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		present = exclusive >> a;
		if (present & 1)
			cnt++;
	}

	return (cnt);
}
