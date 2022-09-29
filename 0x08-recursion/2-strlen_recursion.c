#include "main.h"
/**
 * _strlen_recursion - print lenght of string.
 * @s: string to check the lenght.
 * Return: int.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
