#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: none
 */

void more_numbers(void)
{
	for (int j = 1; j <= 10; j++)
	{
		for (char i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
