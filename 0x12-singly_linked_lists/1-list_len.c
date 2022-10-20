#include "lists.h"

/**
* list_len - function that return the lenght of element
* @h: List of nodes to check length
* Return: Number of element in a linked list
*/

size_t list_len(const list_t *h)
{
	unsigned int nodeslen = 0;
	
	while (h)
	{
		nodeslen++;
		h = h->next;
	}
	
	return (nodeslen);
}
