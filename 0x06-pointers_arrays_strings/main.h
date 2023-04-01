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
 * _strcat - concatenates strings
 * @dest: the destination
 * @src: the source string
 * Return: a pointer to the new string
 */
char *_strcat(char *dest, char *src);

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strncat - concatenates n bytes of src with dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between first non matching character
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses an array in place
 * @a: an array
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - converts letters in a string to uppercase
 * @s: string to make uppercase
 * Return: the uppercase string
 */
char *string_toupper(char *s);

/**
 * cap_string - capitalises first letters of a string
 * @s: the string
 * Return: the capitalised string
 */
char *cap_string(char *s);

/**
 * leet - changes string to leet encoding
 * @s: the string
 * Return: the encoded string
 */
char *leet(char *s);

/**
 * rot13 - rot13 encryption
 * @s: the string
 * Return: the new string
 */
char *rot13(char *s);
#endif
