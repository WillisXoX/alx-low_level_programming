#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: integer variable
 * Return: Always 0
 */

void print_line(int n)
{
	char c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			_putchar('_');
			c++;
		}
	}
	_putchar('\n');
}
