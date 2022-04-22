#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct print_type - structure for different types of cases
 * @t: function specifiers
 * @f: function pointer
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);

#endif
