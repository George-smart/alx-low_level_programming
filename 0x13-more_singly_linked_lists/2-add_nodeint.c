#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list.
 * @head: head of the list.
 * @n: number to add.
 * Return: The address of the new node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
		
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	newNode->next = *head;
	*head = newNode;
	return (*head);
}
