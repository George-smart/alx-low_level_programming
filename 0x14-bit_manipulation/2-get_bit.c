/**
 * get_bit - finds value of bit at a given index
 * @n: decimal number
 * @index: index starting from 0
 *
 * Return: value of bit at index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return (n >> index & 1);
}
