#include "main.h"

/**
 * _puts_recursion - Print a strring and  a new line.
 * @s:the string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s=='\0')
	{
		_putchar(*s);// print current character
		_puts_recursion(s + 1);// Recursively call the function
	}

	else
		_putchar('\n');
}
