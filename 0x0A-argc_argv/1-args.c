#include <stdio.h>


/**
 * main - print the numbers of argument passed into it
 * @argc: the no of command-line arguments
 * @argv: an array of command-line strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
