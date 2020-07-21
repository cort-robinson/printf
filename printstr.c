#include "holberton.h"
/**
 * printstr - Prints a string.
 * @c: String to print.
 */
int printstr(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		_putchar(c[i]);
	}

	return(i);
}
