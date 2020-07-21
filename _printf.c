#include "holberton.h"
/**
 * _printf - Produces output according to a format.
 *
 * @format: Format for output.
 *
 * Return: Number of characters printed (exluding the
 * null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	va_list print;
	int i, count = 0;

	va_start(print, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				count += printchar((char) va_arg(print, int));
				break;
			case 's':
				count += printstr(va_arg(print, char *));
				break;
			case '%':
				count += _putchar('%');
				break;
			case 'd':
				count += printint(va_arg(print, int));
				break;
			case 'i':
				count += printint(va_arg(print, int));
				break;
			}
		}
		else
			count += _putchar(format[i]);

	}
	va_end(print);
	return (count);
}
