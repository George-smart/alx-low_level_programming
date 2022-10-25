#include "lists.h"

/**
 * add_nodeint_end - adding node at the end of a list.
 * @head: head of the list.
 * @n: number to add in the list.
 * Return: The address of the new element or null if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	if (temp == NULL)
		return (NULL);

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	return (temp);
}
