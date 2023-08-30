#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if a number is prime.
 * @num: The number to be  checked.
 * @i: the divisor to e check against
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (i == 1)
		return (0);

	if (num % i == 0)
		return (1);
	else
		return (is_prime(num, i - 1));
}
