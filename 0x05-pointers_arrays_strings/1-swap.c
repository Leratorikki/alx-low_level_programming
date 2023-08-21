#include "main.h"
/**
 * swap_int - swaps the value f two integers.
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(*a, *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
