#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: array
 * @size: array size
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t ai;

	if (array && action)
	{
		for (ai = 0; ai < size; ai++)
		{
			action(array[ai]);
		}
	}
}
