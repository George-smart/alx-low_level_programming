#include "main.h"
#include <ctype.h>
/**
 * print_sign - print function
 *@n: character check for +ve or -ve
 * Return: int (0 or 1)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
