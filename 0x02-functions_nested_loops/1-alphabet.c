#include <unistd.h>
#include "main.h"
/**
 * Print_alphabet - Entry Point
 *
 * 
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
