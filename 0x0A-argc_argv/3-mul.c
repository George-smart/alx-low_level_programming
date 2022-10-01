#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: count.
 * @argv: list
 * Return: 1 or Error.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = (int)(num1 * num2);
		printf("%i\n", result);
	}
	return (1);
}
