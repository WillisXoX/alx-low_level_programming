#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer variable
 */

void print_triangle(int size)
{
	int sign = 1;

	if (size > 0)
	{
		for (int i = size; i > 0; i--)
		{
			for (int j = size; j > sign; j--)
			{
				_putchar(' ');
			}
			for (int k = 0; k < sign; k++)
			{
				_putchar('#');
			}
			sign++;

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
