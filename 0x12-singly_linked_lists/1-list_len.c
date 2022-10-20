#include "lists.h"

/**
* list_len - function that return the lenght of element
* @h: head of the link
* Return: number of nodes as size_t
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
