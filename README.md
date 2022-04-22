# 0x11. C - printf

## Mandatory Tasks

0. Task 0: Write a function that produces output according to a format.

	* Prototype: `int _printf(const char *format, ...);`
	* Returns: the number of characters printed (excluding the null byte used to end output to strings)
	* write output to `stdout`, the standard output stream
	* Format is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
	
	You need to handle the following conversion specifiers:
		
		- c
		- s
		- %

	* You don’t have to reproduce the buffer handling of the C library printf function
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

1. Task 0: Handle the following conversion specifiers:
		
		- d
		- i

	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

## Advanced Tasks
2.  Handle the following custom conversion specifiers:
	
		- b: the unsigned int argument is converted to binary

3. Handle the following conversion specifiers:

		- u
		- o
		- x
		- X
	
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

4. Handle the following custom conversion specifier:
		- S : prints the string.

	* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

5. Handle the following conversion specifier: p.
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers
