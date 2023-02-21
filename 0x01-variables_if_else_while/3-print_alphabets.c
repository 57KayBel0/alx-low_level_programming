#include <stdio.h>
/**
 * main - prints lowercase alphabets and uppercase alphabets
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char i = ('a');
	char j = ('A');

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

