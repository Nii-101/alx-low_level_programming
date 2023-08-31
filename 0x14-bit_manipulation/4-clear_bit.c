#include "main.h"

/**
 * clear_bit- This function sets the value of a given bit to 0
 *
 * @n: A pointer to the number to be changed
 *
 * @index: This is the index of the bit to clear
 *
 * Return: Returns 1 successful and -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

