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





/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of no.
 * Return: base ^ exponent
 */

static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int a;
	unsigned long ans = base;

	for (a = 1; a < exponent; a++)
	{
		ans *= base;
	}
	return (ans);
}

/**
 * print_p - prints an address
 * @p: address to print
 * Return: no. of printed characters
 */

int print_p(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long b, c;
	char *str = "(nil)";

	b = va_arg(p, unsigned long);
	if (b == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	c = _pow(16, 15); /* 16 ^ 15 */
	a[0] = b / c;
	for (i = 1; i < 16; i++)
	{
		c /= 16;
		a[i] = (b / c) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
