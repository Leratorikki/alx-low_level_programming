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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
