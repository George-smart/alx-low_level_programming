#include "main.h"
/**
 * print_last_digit - print last digit number
 * @n: to be computed
 * Return: last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar('0' + lastdigit);
	return (lastdigit);
}
