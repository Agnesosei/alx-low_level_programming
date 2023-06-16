#include <stdlib.h>
#include "main.h"

/**
 * array_range - Array of integers from min to max.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Null If min > max or error, else
 *         a pointer to the new array
 */

int *array_range(int min, int max)
{
	int i;
	int len;
	int *a;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
