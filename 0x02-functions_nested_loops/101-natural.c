#include <stdio.h>

/**
 *main - returns the sum of the multiples of 3 and 5 below 1024
 *
 *Return: 0 means success
 *
*/
int main(void)
{
	int i, s = 0;

	while (i > 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			s += i;
		}
		i++;
	}

	printf("%d\n", s);
	return (0);
}
