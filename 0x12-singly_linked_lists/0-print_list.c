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
		if (h->str == NULL)
			printf("[0] (nil)");
		
		printf("[%d] %s", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
