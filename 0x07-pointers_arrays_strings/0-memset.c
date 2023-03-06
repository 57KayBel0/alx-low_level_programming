#include "main.h"

/**
  * *_memset - Function fills memory  with a constant byte.
  * @s: string input
  * @b: string input
  * @n: integer input
  * Returns: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}


