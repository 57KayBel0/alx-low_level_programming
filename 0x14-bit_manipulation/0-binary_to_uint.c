#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (; *b; ++b)
	{
		if (*b == '0')
			num <<= 1;
		else if (*b == '1')
			num = (num << 1) | 1;
		else
			return (0);
	}

	return (num);
}
