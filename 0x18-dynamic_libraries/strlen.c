#include "main.h"
#include <string.h>
/**
 * _strlen - length of the string
 *
 * @s: argument
 * Return: length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
