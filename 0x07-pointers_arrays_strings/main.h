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
 * _memset - fills first n bytes of memory with b
 * @s: memory area
 * @b: byte to fill
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n);
#endif
