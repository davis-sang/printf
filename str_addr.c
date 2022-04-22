#include "main.h"
#include <stdlib.h>

/** 
 * hex_print -prints a char's ascii value in uppercase hex
 * @c: char to print
 * Return: no. of printed chars
 */

static int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}

/**
 * print_S - prints a string & non printable character ascii values
 * @S: string to print
 * Return: no. of printed chars
 */

int print_S(va_list S)
{
	unsigned int a;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a]; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(str[a]);
		}
		else
		{
			_putchar(str[a]);
			count++;
		}
	}
	return (count);
}

