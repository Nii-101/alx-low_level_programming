#include <stdio.h>
/**
 *main- prints out sum of even numbers of the fibonacci sequence < 4000000
 *
 *@x: First value of the fibonacci sequence
 *
 *@y: second value of the fibonacci sequence
 *
 *@z: sum of the current and previous number of the sequence
 *
 *@a: sum of the current and previous even  number of the fibonacci sequence
 *
 *@b: sum of the even numbers of the fibonacci sequence, below 4000000
 *
 *Return: 0 means success
 */
int main(void)
{
	int x, y, z, a, b;

	x = 1;

	y = 2;

	z = x + y;

	for (; z < 4000000; z = x + y)
	{
		x = y;
		y = z;
		if (y == z)
		{	a = z + y;
		}
	}
	b = a + 2;
	printf("%d\n", b);

	return (0);
}
