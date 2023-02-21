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
	{
		putchar(i);
		putchar(i != 'q' && 'e');
	}
	putchar('\n');
	return (0);
}

