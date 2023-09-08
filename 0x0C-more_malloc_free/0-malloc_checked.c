#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - a prog. that cause normal process termination
 *with a status value of 98
 *@b: memory's allocation
 *Return: cache
 */
void *malloc_checked(unsigned int b)
{
	void *cache;

	cache = malloc(b);
	if (cache == NULL)
		exit(98);
	return (cache);
}
