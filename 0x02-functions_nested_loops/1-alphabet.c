#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry Point
 *
 * Return: none
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
	_putchar('\n');
}
