#include "main.h"

/**
 * binary_to_uint - Converts  binary to unsigned int.
 * @b: pointer to string
 *
 * Return:( 0)
 */

unsigned int binary_to_uint(const char *b)
{
	int it;
	unsigned int numb;

	numb = 0;
	if (b == NULL)
		return (0);
	for (it = 0; b[it] != '\0'; it++)/*iterate over each character*/
	{
		if (b[it] != '0' && b[it] != '1')
			return (0);
	}
	for (it = 0; b[it] != '\0'; it++)
	{
		numb <<= 1;
		if (b[it] == '1')
			numb += 1;
	}
	return (numb);
}
