#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments into a single string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, l = 0;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;

	ptr = malloc(sizeof(char) * k + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		ptr[l] = av[i][j];
		l++;
	}
	if (ptr[l] == '\0')
	{
		ptr[l++] = '\n';
	}
	}
	return (ptr);
}
