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

/**
 * more_numbers - print 0 to 14
 */
void more_numbers(void);

/**
 * print_line - prints a line in the terminal
 * @n: length of the line
 */
void print_line(int n);

/**
 * print_diagonal - prints a diagonal line in the console
 * @n: number of lines
 */
void print_diagonal(int n);

/**
 * print_square - prints a square in the terminal
 * @size: size of the square
 */
void print_square(int size);

/**
 * print_triangle - function to print a triangle in the console
 * @size: size of the triangle
 */
void print_triangle(int size);
#endif
