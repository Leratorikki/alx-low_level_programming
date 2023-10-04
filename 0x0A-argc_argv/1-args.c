nclude <stdio.h>
#include "main.h"

/**
 * main - Prints the num of arguments passed into it.
 *
 * @argc: The numb of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	
	printf("%d\n", argc - 1);
	return (0);
}
