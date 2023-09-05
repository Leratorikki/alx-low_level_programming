#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - create array and inizialise it with a specific char
 *@size: the size of memory to allocate
 *@c: the char to inizialize the array with
 *
 * Return: NULL if size is 0, or NULL to a pointer of array if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		array[k] = c;
	}
	return (array);
}
