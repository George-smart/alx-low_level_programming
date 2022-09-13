#include "main.h"
#include <ctype.h>
/**
 * _islower - check for c function
 *
 * Description: check for lower case in c
 *
 * Return: (0) or (1)
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
