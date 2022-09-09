#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print the lowercase of a-z
 *
 * Return: zero
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
		putchar('\n');
	return (0);
}
