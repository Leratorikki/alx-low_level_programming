#include <stdio.h>
#include "main.h"

/**
 * main - Prints all the command-line arguments, each on a new line.
 * 
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 * 
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int maya;
	
	for (maya = 0; maya < argc; maya++)
	{
		printf("%s\n", argv[maya]);
	}
	return (0);
}
