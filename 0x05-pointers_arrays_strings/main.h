#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * void reset_to_98 - updates the value it points to 98
 * @n: pointeri to integer
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 */

void swap_int(int *a, int *b);

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string
 */

int _strlen(char *s);

/**
 * _puts -  prints a string
 * @str: pointer to string
 */

void _puts(char *str);

/**
 * print_rev - prints a string, in reverse
 * @s: pointer to string
 */

void print_rev(char *s);

/**
 * rev_string - function that reverses a string
 * @s: integer to string
 */

void rev_string(char *s);

/**
 * puts2 -  prints every other character of a string
 * @str: pointer tp string
 */

void puts2(char *str);

/**
 * puts_half -  prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str);

/**
 * print_array -  prints n elements of an array of integers
 * @a: array of integers
 * @n: size to print
 */

void print_array(int *a, int n);

/**
 * _strcpy - function that copies the string pointed
 * @dest: pointer to string
 * @src: pointer to string
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to string
 */

int _atoi(char *s);

#endif
