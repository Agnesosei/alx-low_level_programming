#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer.
 * @index: index of bit.
 *
 * Return: 1 on success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	y = 1 << index;

	if (*n & y)
		*n ^=y;

	return (1);
}
