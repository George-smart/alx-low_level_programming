#include <unistd.h>
#include "main.h"
/**
 * Print_alphabet - Entry Point
 * Description: print alphabets in lowercase 
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
