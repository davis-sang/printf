#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a string
 * @format: string to be printed
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int i, j, c = 0;
	va_list ap;
	pt_t types[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL},
	};
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			j = 0;
			while (types[j].fs != NULL)
			{
				if (*(types[j].fs) == format[i])
					c += types[j].f(ap);
				j++;
			}
			i++;
		}
		if (format[i] != '%' && format[i] != '\0')
		{
			c += _putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (c);
}
