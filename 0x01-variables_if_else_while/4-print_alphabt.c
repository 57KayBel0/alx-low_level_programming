#include <stdio.h>
/**
 * main - prints lowercase alphabets,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char i = ('a');

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

