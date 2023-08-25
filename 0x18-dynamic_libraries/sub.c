#include "operations.h"

/**
 * sub - function the takes in two intager numbers and subract them
 * @num1: the first parameter passed to the function
 * @num2: the second parameter
 * Return: This function returns the result of subtracting two numbers
 */

int sub(int num1, int num2)
{
	if (num1 != 0 && num2 != 0)
	{
		return (num1 - num2);
	}

	return (0);
}
