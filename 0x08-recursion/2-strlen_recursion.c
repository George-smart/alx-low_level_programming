#include "main.h"
/**
 * _strlen_recursion - print lenght of string.
 * @s: string to check the lenght.
 * Return: int.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		_strlen_recursion(s + 1);
	}

	return (len);
}
