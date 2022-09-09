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
	char c;
	int i;
	float f;
	long int li;
	long long int lli;	

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
