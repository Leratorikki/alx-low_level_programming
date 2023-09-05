#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: pointer to the newly allocated duplicated string,
 * or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	int m, n = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[m] != '\0')
		m++;

	ptr = malloc(sizeof(char) * (m + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ptr[n] = str[n];

	return (ptr);
}
