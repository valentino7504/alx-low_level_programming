#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - fucntion to print characters to stdout
 * @c: The character to print
 * Return: On success 1.
 * One error, -1 is retunred and stderr is set appropriately
 */
int _putchar(char c);

/**
 * reset_to_98 - resets value of an int to 98
 * @n: the number to reset
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps two integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b);

/**
 * _strlen - gets the length of the string
 * @s: string to be checked
 * Return: the length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string to stdout
 * @str: tehs tring to be printed
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s);
#endif
