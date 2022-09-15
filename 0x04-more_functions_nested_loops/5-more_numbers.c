#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: none
 */

void more_numbers(void)
{
	char c = '0';

	for (int j = 1; j <= 10; j++)
	{
		for (int i = 0; i <= 14; i++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = '0';
	}
}
