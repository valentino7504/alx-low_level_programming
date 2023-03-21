#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: parameter to print
 * Return: 0 if program runs
 */
int _putchar(char c);

/**
 * print_alphabet - prints alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * @c: parameter to check
 * Return: 1 if lower and 0 if not
 */
int _islower(int c);

/**
 * _isalpha - checks if a character is a letter
 * @c: character to be checked
 * Return: 1 if it is a letter else 0
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: -1, 0, +1 if n is -ve, 0 or +ve resp.
 */
int print_sign(int n);

/**
 * _abs - computes absolute value of an integer
 * @int - parameter to be checked
 * Return: absolute value of the integer
 */
int _abs(int);
#endif
