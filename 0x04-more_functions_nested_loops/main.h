#ifndef MAIN_H
#define MAIN_H

/**
* _putchar - puts character to standard output
* @c: character to put to standard output
*/

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to put to standard output
 */

int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c - integer variable
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a - integer variable
 * @b - integer variable
 */

int mul(int a, int b);

/**
 * print_numbers -  prints the numbers, from 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void);

/**
 * print_line - draws a straight line in the terminal
 * @n: integer variable
 */

void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer variable
 */

void print_diagonal(int n);

/**
 * print_square - prints a square
 * @size: interger variable
 */

void print_square(int size);

/**
 * print_triangle - prints a triangl
 * @size: interger variable
 */

void print_triangle(int size);

#endif
