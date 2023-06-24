#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: count of numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list addit;

	va_start(addit, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(addit, int);
		printf("%d", number);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(addit);
}
