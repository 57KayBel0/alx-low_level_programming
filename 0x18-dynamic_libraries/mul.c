#include "operations.h"

/**
 * mul - function mutiplies to numbers
 * @num1: the first parameter passed to the function
 * @num2: the second parameter
 * Return: This function returns a total of multiplying num1 and num2
 */

int mul(int num1, int num2)
{
	if (num1 != 0 && num2 != 0)
	{
		return (num1 * num2);
	}

	return (0);
}
