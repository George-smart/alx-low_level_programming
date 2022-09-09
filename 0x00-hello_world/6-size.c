#include <stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints the size of various
 * types on the screen
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char = charType;
	int = intType;
	float = floatType;

	printf("Size of a char: %lu, byte(s)\n", sizeof(charType));
	printf("Size of a int: %lu, byte(s)\n", sizeof(intType));
	printf("Size of a char: %lu, byte(s)\n", sizeof(long int));
	printf("Size of a char: %lu, byte(s)\n", sizeof(long long int));
	printf("Size of a char: %lu, byte(s)\n", sizeof(floatType));

	return (0);
}
