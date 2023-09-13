#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *@name: argument to be printed
 *@f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int c;

	if (name == NULL || f == NULL)
		return;

	for (c = 0; name[c] != '\0'; c++)
	{
		(*f)(&name[c]);
	}
}
