#include "holberton.h"
/**
 * printstr - Prints a string.
 * @c: String to print.
 * Return: Length of string c.
 */
int printstr(char *c)
{
	int i;

	if (c == NULL)
		return (0);

	for (i = 0; c[i]; i++)
	{
		_putchar(c[i]);
	}

	return (i);
}
