#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - create array and inizialise it with a apecifial char
 *
 * Return: NULL if size is 0, or NULL to a pointer of array if it fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		unsigned int k;

		for (k = 0; k < size; k++)
		{
			array[k] = c;
		}
		array[size] = '\0';
		return (array);
	}
}

