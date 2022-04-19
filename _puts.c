#include "main.h"

/**
 * _puts - function prints a string followed by newline.
 * @str: String to be printed
 * Return: none
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}
