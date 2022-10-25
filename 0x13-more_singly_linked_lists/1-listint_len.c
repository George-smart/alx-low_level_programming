#include <stdlib.h>
#include "lists.h"

/**
* listint_len - function to find the number of element
* in a list.
* @h: head node.
* Return: Number of element in a link list.
*/

size_t listint_len(const listint_t *h)
{
	int len;
	listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		len += 1;
		temp = temp->next;
	}
	return (0);
}
