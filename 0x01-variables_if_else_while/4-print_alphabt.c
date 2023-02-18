#include <stdio.h>
#include <stdlib.h>

/**
 * main - lower case except e and q
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch = 'a';

	while (ch <= '2')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
