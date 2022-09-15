#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer variable
 * Return: Always 1 true or 0 false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
