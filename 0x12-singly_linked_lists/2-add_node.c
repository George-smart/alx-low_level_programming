#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *newNode;
	
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	
	while (str[length])
		length++;

	newNode->len = length;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
