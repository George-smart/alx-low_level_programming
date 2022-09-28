#include "main.h"
/**
 * _puts_recursion - a function that prints string, followed by new line.
 * @s: string to print.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return;

	_putchar(s[0]) + _puts_recursion(s + 1);
}
