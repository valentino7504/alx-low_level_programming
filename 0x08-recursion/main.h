#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints a character to the output stream
 * @c: the character to be printed
 * Return: the printed character
 */
int _putchar(char c);

/**
 * _strlen - find the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s);

/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - calculates strlen using recursion
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s);

/**
 * factorial - calculate factorial of a number
 * @n: the number
 * Return: n! or -1 if n < 0
 */
int factorial(int n);

/**
 * _pow_recursion - calculates x to power y
 * @x: the base
 * @y: the exponent
 * Return: x ^ y
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - calculate square root of a number recursively
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if a string is a palindrome
 */
int is_palindrome(char *s);
#endif
