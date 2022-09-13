#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer variable
 * Return: Always 0
 */

void print_to_98(int n)
{
	for (int i = n; i <= 98; i++)
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
	}
	_putchar('\n');
}


