#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds all its paramters.
 * @n: paramters
 *
 * Return: 0 if n == 0
 *  else  sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addit;
	unsigned int i;
	unsigned int sum = 0;

	va_start(addit, n);

	for (i = 0; i < n; i++)
		sum += va_arg(addit, int);

	va_end(addit);

	return (sum);
}
