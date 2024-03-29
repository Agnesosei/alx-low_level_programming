#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to copy
 *
 * Return: Null if error or char pointer
 */

char* string_nconcat(char* s1, char* s2, unsigned int n)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char* result;
	unsigned int i, j;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	
	if (n >= s2_length)
		n = s2_length;
	
	result = (char*)malloc((s1_length + n + 1) * sizeof(char));
	
	if (result == NULL)
		return NULL;
	
	for (i = 0; i < s1_length; i++)
		result[i] = s1[i];
	
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
	
	result[i + j] = '\0';
	
	return result;
}

/**
#include "main.h"
#include <stdlib.h>

 * string_nconcat - concatenates two strings with a given number of bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy into s1
 *
 * Return: Null if error or char pointer to the new joined place in memory
 *

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	char *x;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}

	if (b > n)
		b = n;
	x = malloc(sizeof(char) * (a + b + 1));

	if (x == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		x[c] = s1[c];

	for (c = 0; c < b; c++)
		x[c + a] = s2[c];

	x[a + b] = '\0';

	return (x);
}
*/
