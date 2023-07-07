#include "main.h"
/**
 * get_endianness - return endianness
 *
 * Return: 0 for big endian else 1
 */
int get_endianness(void)
{
	int p = 1;

	return (*((char *) &p) + '0');
}
