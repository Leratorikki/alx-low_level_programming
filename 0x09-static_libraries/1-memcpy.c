#include "main.h"

/**
 * _memcpy - copied memory area
 * @dest: A pointer to memory area to be copied
 * @src: Copied memory byte
 * @n: The number to the bytes to be copied
 *
 * Return: A pointer to the memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		dest[d] = src[d];
	return (dest);
}
