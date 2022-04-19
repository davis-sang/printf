#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a string
 * @format: string to be printed
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int i;
	unsigned int p_char;
	char *p_str;
	va_list ap;
	const char *string;

	va_start(ap, format);

	string = format;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '%' && string[i] != '\0')
		{
			_putchar(string[i]);
			i++;
		}
		if (string[i] == '%')
		{
			i++;
			switch (string[i])
			{
				case 'c':
					p_char = va_arg(ap, int);
				       _putchar(p_char);
					break;
				case 's':
					p_str = va_arg(ap, char *);
					_puts(p_str);
					break;
			}
			i++;
		}
	}
	va_end(ap);
	return (0);
}
