#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: decimal number
 * @index: index of bit to clear, starting from 0
 *
 * Return: 1 || -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n == NULL)
		return (-1);

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	*n = *n & (~mask);

	return (1);
}
