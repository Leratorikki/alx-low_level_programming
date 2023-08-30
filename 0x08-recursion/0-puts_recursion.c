#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
