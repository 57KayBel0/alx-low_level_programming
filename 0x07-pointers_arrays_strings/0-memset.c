#include "main.h"

/**
  * *_memset - Fills a block of memory  with a specifc value.
  * @s: starting address of memory to be filled
  * @b: the desired value
  * @n: number of bytes to be changed
  *
  * Returns: s
  */
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for  (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


