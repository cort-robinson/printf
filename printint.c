#include "holberton.h"
/**
 * printint - prints an integer
 * @i: input int to print
 * Return: count of printed digits
 */
int printint(int i)
{
	int temp = i, count;

	count = digitcount(temp);
	if (temp < 0)
	{
		_putchar('-');
		temp *= -1;
	}
	if (temp >= 10)
		printint(temp / 10);
	_putchar(temp % 10 + '0');
	return (count);
}

/**
 * digitcount - counts digits of an integer
 * @i: input integer to count
 * Return: number of digits
 */
int digitcount(int i)
{
	int count = 0, temp = i;

	if (temp < 0)
	{
		count++;
		temp *= -1;
	}
	while (temp)
	{
		temp /= 10;
		count++;
	}
	return (count);
}
