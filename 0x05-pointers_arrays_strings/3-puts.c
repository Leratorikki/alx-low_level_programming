#include "main.h"
/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		
	}
	_putchar('\n');
}
