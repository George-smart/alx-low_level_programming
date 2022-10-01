#include "main.h"
#include <ctype.h>
/**
 * _islower - check function
 *@c: An input character
 * Description: function uses _islower function to chect for int c
 *
 * Return: int value (0 or 1)
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
