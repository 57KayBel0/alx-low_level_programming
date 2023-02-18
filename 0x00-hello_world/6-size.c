#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

    /* Sizeof operator is used to evaluate the size of a variable*/
    printf("Size of int: %ld bytes(s)\n", sizeof(integerType));
    printf("Size of float: %ld bytes(s)\n", sizeof(floatType));
    printf("Size of double: %ld bytes(s)\n", sizeof(doubleType));
    printf("Size of char: %ld byte(s)\n", sizeof(charType));

    return (0);
}
