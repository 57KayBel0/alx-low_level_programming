#include "main.h"
/**
  * _sqrt - function that returns the natural square root of a number
  * @n: integer
  * @x: integer
  * Return: natural square root of a number
  *	    -1 if negative, n == 0 || 1
  */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root of a number
  * @n: integer
  * Return: natural square root of a number
  *	    -1 if negative, n == 0 || 1
  */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, x));
}
