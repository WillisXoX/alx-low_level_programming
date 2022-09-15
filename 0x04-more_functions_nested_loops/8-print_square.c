#include "main.h"

/**
 * print_square - prints a square
 * @size: interger variable
 */

void print_square(int size)
{
	if (size > 0)
	{
		for (int i = size; i > 0; i--)
		{
			for (int j = size; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

