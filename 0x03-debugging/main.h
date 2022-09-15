#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * postitive_or_negative - tests function that prints if integer is positive or negative
 * @i: integer variable
 */

void positive_or_negative(int i);

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 */

int largest_number(int a, int b, int c);

int convert_day(int month, int day);

void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
