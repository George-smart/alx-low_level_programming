#include "lists.h"
#include <stdio.h>

/**
* print_list - function that print list element
* @h: list of elements to print
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
