#include "lists.h"

/**
* print_list - function that print list element
* @h: list of elements to print
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%s, ", h->str);
		h = h->s
	}
}
