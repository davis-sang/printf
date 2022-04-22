#include "main.h"

/**
 * print_hex - converts unsigned int to hexidecimal form
 * @n: unsigned int
 * @c: flag to determine case of printing (0 = lower, 1 = upper)
 * Return: no. of printed digits
 */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int sum, x, y;
	char d;
	int count;

	y = 268435456; /* (16 ^ 7) */
	if (c)
		d = 'A' - ':';
	else
		d = 'a' - ':';
	a[0] = n / y;
	for (x = 1; x < 8; x++)
	{
		y /= 16;
		a[x] = (n / y) % 16;
	}
	for (x = 0, sum = 0, count = 0; x < 8; x++)
	{
		sum += a[x];
		if (sum || x == 7)
		{
			if (a[x] < 10)
				_putchar('0' + a[x]);
			else
				_putchar('0' + d + a[x]);
			count++;
		}
	}
	return (count);
}

/**
 * print_u - converts an unsigned int to decimal notation
 * @u: unsigned int
 * Return: no. of printed digits
 */

int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int sum, x, y, z;
	int c;

	z = va_arg(u, unsigned int);
	y = 1000000000; /* (10 ^ 9) */
	a[0] = z / y;
	for (x = 1; x < 10; x++)
	{
		y /= 10;
		a[x] = (z / y) % 10;
	}
	for (x = 0, sum = 0, c = 0; x < 10; x++)
	{
		sum += a[x];
		if (sum || x == 9)
		{
			_putchar('0' + a[x]);
			c++;
		}
	}
	return (c);
}

/**
 * print_o - converts an unsigned int to octal notation
 * @o: unsigned int
 * Return: no. of printed digits
 */

int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int sum, x, y, z;
	int c;

	z = va_arg(o, unsigned int);
	y = 1073741824; /* (8 ^ 10) */
	a[0] = z / y;
	for (x = 1; x < 11; x++)
	{
		y /= 8;
		a[x] = (z / y) % 8;
	}
	for (x = 0, sum = 0, c = 0; x < 11; x++)
	{
		sum += a[x];
		if (sum || x == 10)
		{
			_putchar('0' + a[x]);
			c++;
		}
	}
	return (c);
}

/**
 * print_x - converts an unsigned int to lowercase hex
 * @x: unsigned int
 * Return: no. of printed digits
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - converts an unsigned int to uppercase hex
 * @X: unsigned int
 * Return: number of digits printed
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

