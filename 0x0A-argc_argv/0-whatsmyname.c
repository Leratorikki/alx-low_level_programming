#include <stdio.h>
/**
 * main - print the nunbersof arguments passed into it
 *@argc: the numher of command-line arguments
 *@argv: An array of command-line arguments string
 *
 * Return:0 on success
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
