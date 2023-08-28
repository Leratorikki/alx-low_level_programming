#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: pointer to the first occurence of c in s, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
