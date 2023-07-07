#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: numb 1.
 * @m: numb 2.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitno;

	for (bitno = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bitno++;
	}

	return (bitno);
}
