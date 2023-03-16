#include "main.h"
#include <stdlib.h>
/**
  * *create_array - creates an array of chars,
  *		    and initializes it with a specific char
  * @size: size of an array to be initialized.
  * @c: specific character to be initialized with array
  * Return: NULL if size = 0 else return [], || NULL if fails
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
