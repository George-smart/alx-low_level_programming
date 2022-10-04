#include <stdlib.h>

/**
 * create_array - creating an array using malloc
 * @size: size of space to create
 * @c: charater arrays to initialize
 * Return: pointer array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
