#include "main.h"
#include "strlen.c"

/**
 * converter - converts individual characters
 * @c: the character
 * Return: the changed char
 */
char converter(char *c)
{
	int i;
	char first_half[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char second_half[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; i < _strlen(first_half) && first_half[i] != '\0'; i++)
	{
		if (*c == first_half[i])
		{
			return (second_half[i]);
		}
	}
	return (*c);
}
/**
 * rot13 - rot 13 encryption
 * @s: the string
 * Return: the rotated string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		s[i] = converter(&s[i]);
	}
	return (s);
}
