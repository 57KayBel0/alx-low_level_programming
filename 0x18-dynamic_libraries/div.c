#include "operations.h"

/**
 * div - functiondivides two numbers
 * @num1: the first parameter passed to the function
 * @num2: the second parameter
 * Return: he result or (0)
 */

int div(int num1, int num2)
{
	if (num1 != 0 && num2 != 0)
	{
		return (num1 / num2);
	}

	return (0);
}
