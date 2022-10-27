#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits between n & m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int mask;
	int count = 0;

	mask = ~0;
	mask = mask >> 1;
	mask = ~mask;

	num = n ^ m;

	while (mask > 0)
	{
		if (num & mask)
			count++;

		mask = mask >> 1;
	}

	return (count);
}
