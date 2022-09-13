#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */

int main(void)
{
	int sum = 0, i = 1023;

	while (i >= 0)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}

		i++;
	}
	printf("%d\n", sum);

	return (0);
}
