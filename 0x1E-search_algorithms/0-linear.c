#include "search_algos.h"

/**
 * linear_search - Searches for a value in a sorted array
 *
 *  @array: An array of integers
 *
 *  @size: The size of the array
 *
 *  @value: The value to search for
 *
 * Return: Returns the index of value or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t inc;

	if (array == NULL)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
	}
	return (-1);
}
