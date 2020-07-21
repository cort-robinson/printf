#include "holberton.h"
/**
 * printchar - Print a character.
 * @c: Character to print.
 * Return: 1.
 */
int printchar(char c)
{
	if (c == NULL)
		return (0);
	return (_putchar(c));
}
