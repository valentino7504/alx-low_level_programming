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

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s);

/**
 * puts2 - prints only characters at even spots in a string
 * @str: string to be printed
 */
void puts2(char *str);

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 */
void puts_half(char *str);

/**
 * print_array - prints elements of an array
 * @a: the array to be printed
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n);

/**
 * char *_strcpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: the string to be checked
 * Return: the number
 */
int _atoi(char *s);
#endif
