#ifndef MAIN_H
#define MAIN_H
/**
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n);

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

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be copied
 * Return: the dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - returns the first occurence of a character in a string
 * @s: the string
 * @c: the character
 * Return: the first occurence of c
 */
char *_strchr(char *s, char c);

/**
 * strspn - Returns the number of bytes in s consisting of bytes from accept
 * @s: the string
 * @accept: the string to be used
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - locates first occurence of a string in another
 * @s: the string to be checked in
 * @accept: the substring
 * Return: the pointer to the rest of the string
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - finds the first occurrence of the needle in the haystack
 * @haystack: the haystack to be checked
 * @needle: the needle string to be found
 * Return: pointer to incidence
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints a char chessboard
 * @a: the board details
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size);
#endif
