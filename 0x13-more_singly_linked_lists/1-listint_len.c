#include "lists.h"

/**
* listint_len - function to find the number of element
* in a list.
* @h: head node.
* Return: Number of element in a link list.
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
