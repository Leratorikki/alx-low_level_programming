#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills memory with constant byte.
 * @s: A pointer to memory area to be filled.
 * @b: The constant byte value to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory areas @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}
