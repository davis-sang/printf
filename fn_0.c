#include "main.h"
/**
 * print_c - prints a char
 * @c: char to print
 * Return: 1
 */
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
/**
 * print_s - prints a string
 * @s: string to print
 * Return: no. of chars printed
 */
int print_s(va_list s)
{
	int c;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (c = 0; str[c]; c++)
	{

		_putchar(str[c]);
	}
	return (c);
}
