#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to output
 * @c: The character to print
 * Return: On success 1 or -1 on error
 */
int _putchar(char c);

/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - check if a character is a digit
 * @c: character to be checked
 * Return: 1 if it is a digit or 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first no
 * @b: second no
 * Return: product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - print 0 to 9 without 2 and 4
 */
void print_most_numbers(void);
#endif
