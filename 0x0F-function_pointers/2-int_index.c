#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that looms for int
 * @array: an array
 * @size: the size of array elements
 * @cmp: the ptr to tge funct tbat is use to compare values
 *
 * Return: -1 if size is equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
			return (u);
	}
	return (-1);
}

