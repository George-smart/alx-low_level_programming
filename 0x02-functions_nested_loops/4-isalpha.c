#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check function
 *@c: character to check alpha
 * Return: int (0 or 1)
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
