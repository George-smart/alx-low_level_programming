#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count argument.
 *@argv: array of string.
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("The name of the program is %s\n", argv[0]);
	return (0);
}
