#include "main.h"

/**
 * print_c - prints characters
 * @ap: argument parameters
 * Return: 1
 */

int  print_c(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_s - prints strings
 * @ap: argument parameters
 * Return: i
 */

int print_s(va_list ap)
{
	char *str;
	int i;

	str = (va_arg(ap, char*));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_p - prints %
 * @ap: argument parameters
 * Return: 1
 */

int print_p(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}
