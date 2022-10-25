#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* print_listint - Function that print the number of nodes
* @h: the nodes to print its number
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	int num;
	listint_t *temp;
	
	temp = h;
	while (temp != NULL)
	{
		printf("%d", temp->n);
		num += 1;
		temp = temp->next;
	}
	return (num);
}
