#include "main.h"
#include "strlen.c"
/**
 * set_string - sets value of a pointer to a string
 * @s: the source
 * @to: the new string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
