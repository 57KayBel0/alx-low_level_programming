#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer
 *	       to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter.
 * @str:  string which is a duplicate of the string str
 *  Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
