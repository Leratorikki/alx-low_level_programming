#include "main.h"
/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @c:a pointer to the binary string
 *
 * Return: converted usigned integer if c is NULL
 */
unsigned int binary_to_uint(const char *c)
{
	int a;
	unsigned int num;
	num  = 0

	if (!c)
		return (0);
	for (a = 0; c[a] !='\0'; a++)
	{
		if (c[a] != '\0' && c[a] ! '\1')
			return (0);
	}
	for (a = 0; c[a] != '\0'; a++)
	{
		num << = 1;
		if (c[a] == '1')
			num += 1;
	}
	return (num);
}
