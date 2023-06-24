#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: string to print between strings
 * @n: number of strings
 *
 * Return: void. If any string is NULL, print nil in place
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list prntstr;

	va_start(prntstr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(prntstr, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(prntstr);
}
