#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with the first n bytes of b2
 * @b1: The first string
 * @b2: The second string
 * @n: The maximum number of bytes from b2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 *         Returns NULL on failure or if n is greater or equal to the len of b2
 */
char *string_nconcat(char *b1, char *b2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (b1 == NULL)
		b1 = "";
	if (b2 == NULL)
		b2 = "";

	while (b1[len1] != '\0')
		len1++;
	while (b2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = b1[i];
		i++;
	}

	while (j < n)
	{
		concat[i] = b2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}

