#include "main.h"
#include <stdio.h>
/**
 *_isupper - function that checks for uppercase character.
 *@c: char to c
 * Return: Returns 1 if c is uppercase
 * else Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
