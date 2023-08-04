#include "main.h"

/**
 *get_bit- Function that  returns the val of a bit at an index in a decimal num
 *
 *@n:The number to search for
 *
 *@index:The index of the bit
 *
 * Return:Returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}


