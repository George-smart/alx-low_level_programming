#include "main.h"

/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: decimal number
 * @index: index to set, starting from 0
 *
 * Return: 1 || -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
