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
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				count += printchar(va_arg(print, char));
				break;
			case 'i':
				count += printint(va_arg(print, int));
				break;
			case 'd':
				count += printdec((float) va_arg(print, double));
				break;
			case '%':
				count += _putchar('%');
				break;
			case 's':
				count += printstring(va_arg(print, char *));
				break;
			}
		}
		else
			count += _putchar(format[i]);
	}
	va_end(print);
	return(count)
}
