#include <stdio.h>
#include "lists.h"

/**
* print_listint - Function that print the number of nodes
* @h: the nodes to print its number
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t num;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num += 1;
	}
	return (num);
}
