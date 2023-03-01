#include "main.h"
/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: a program to _puts function
  */
void _puts(char *str)
{
		for (; *str != '\0' ; str++)
		{
			putchar(*str++);
		}
		putchar('\n');
}
