#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *@name: function to be printed
 *@f: pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
void print(char  *name)
{
	printf("Name: %s\n", name);
}

