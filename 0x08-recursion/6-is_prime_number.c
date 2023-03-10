#include "main.h"
/**
 * is_factor- function that returns 1 if the input integer
 *                   is a prime number, otherwise return 0.
 * @n: integer
 * @fact: integer
 * Return: 1 if input int is a prime number , otherwise 0.
 */
int is_factor(int n, int fact)
{
	if (fact == 1 || fact == n)
	{
		return (0);
	}
	if (n % fact == 0)
	{
		return (1);
	}
	return (is_factor(n, fact - 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 *                   is a prime number, otherwise return 0.
 * @n: imteger
 * Return: 1 if input int is a prime number , otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (!is_factor(n, n - 1));
}
