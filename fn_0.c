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
 * Return: no. of chars and digits printed
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
/**
 * print_d - prints a decimal
 * @d: decimal to print
 * Return: no of chars and digits printed
 */

int print_d(va_list d)
{
	int a[10];
	int i, j, k, sum, c;

	k = va_arg(d, int);
	c = 0;
	j = 1000000000;
	a[0] = k / j;
	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (k / j) % 10;
	}
	if (k < 0)
	{
		_putchar('-');
		c++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			c++;
		}
	}
	return (c);
}
/**
 * print_i - prints an integer
 * @i: integer to print
 * Return: number of chars and digits printed
 */

int print_i(va_list i)
{
	int a[10];
	int h, j, k, sum, c;

	k = va_arg(i, int);
	c = 0;
	j = 1000000000;
	a[0] = k / j;
	for (h = 1; h < 10; h++)
	{
		j /= 10;
		a[h] = (k / j) % 10;
	}
	if (k < 0)
	{
		_putchar('-');
		c++;
		for (h = 0; h < 10; h++)
			a[h] *= -1;
	}
	for (h = 0, sum = 0; h < 10; h++)
	{
		sum += a[h];
		if (sum != 0 || h == 9)
		{
			_putchar('0' + a[h]);
			c++;
		}
	}
	return (c);
}

/**
 * print_b - an unsigned int is converted to binary
 * @b: unsigned int
 * c - count
 * Return: no. of digits printed
 */

int print_b(va_list b)
{
	unsigned int a[32];
	unsigned int sum, x, y, z;
	int c;

	x = va_arg(b, unsigned int);
	y = 2147483648; /* (2 ^ 31) */
	a[0] = x / y;
	for (z = 1; z < 32; z++)
	{
		y /= 2;
		a[z] = (x / y) % 2;
	}
	for (z = 0, sum = 0, c = 0; z < 32; z++)
	{
		sum += a[z];
		if (sum || z == 31)
		{
			_putchar('0' + a[z]);
			c++;
		}
	}
	return (c);
}
