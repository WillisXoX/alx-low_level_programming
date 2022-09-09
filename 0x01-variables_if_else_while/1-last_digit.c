#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastDigit = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	} else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}

	return (0);
}
