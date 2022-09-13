#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer variable
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		if (i == 98)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		else if (i / 10 < 1)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}


