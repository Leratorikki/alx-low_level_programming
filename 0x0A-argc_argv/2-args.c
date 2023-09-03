#include <stdio.h>

/***
 * main - print the numbers of arguments passed into it.
 * @argc: the no of command lin3 arguments
 * @argv: an array of command line arguments string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int b;
	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return (0);
}
