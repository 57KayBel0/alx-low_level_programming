#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	/*int integerType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;*/

    /* Sizeof operator is used to evaluate the size of a variable*/
    printf("Size of char: %ld byte(s)\n", sizeof(char));
    printf("Size of int: %ld bytes(s)\n", sizeof(int));
    printf("Size of long int: %ld bytes(s)\n", sizeof(long int));
    printf("Size of long long int: %ld bytes(s)\n", sizeof(long long int));
    printf("Size of float: %ld bytes(s)\n", sizeof(float));

    return (0);
}
