#include "main.h"

/**
 * _isalpha - Entry point
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
