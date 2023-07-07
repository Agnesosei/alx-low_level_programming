#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit to set
 * @index: The index to set the value of bit
 *
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index > 63)
		return (-1);

	y = 1 << index;
	*n = *n | y;

	return (1);
}

/*int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}*/
