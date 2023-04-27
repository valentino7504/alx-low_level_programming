#include <stdio.h>
/**
 * print_text - prints a sentence before main
 */
void print_text(void) __attribute__((constructor));
void print_text(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
