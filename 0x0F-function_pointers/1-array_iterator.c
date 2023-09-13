#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute function on each elemen of an array
 * @size: the array size
 * @array: the int array
 * @action: the pointer to the func. to be excuted on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t u;

	array == NULL || action = NULL
		return;
	for (u = 0; u < size; u++)
	{
		action(array[u]);
	}
}
