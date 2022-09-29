#include "main.h"
/**
 * factorial - print factorial function.
 * @n: number to find factorial of .
 * Return: int.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
