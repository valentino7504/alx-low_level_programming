#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - checks if a number is +ve
 * @i: number to be checked
 */
void positive_or_negative(int i);

/**
 * largest_number - returns the largest of 3 ints
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest integer
 */
int largest_number(int a, int b, int c);

/**
 * convert_day - converts month to days
 * @month: month
 * @day: day
 * Return: no of days passed in the year
 */
int convert_day(int month, int day);

/**
 * print_remaining_days - print remaining days in the year
 * @month: month
 * @day: day
 * @year: year
 */
void print_remaining_days(int month, int day, int year);
#endif /* MAIN_H */
