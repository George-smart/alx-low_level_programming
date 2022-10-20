#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - adding to the front of a list
* @head: head of the list
* @str: str data of the added node list
* Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *copystr;

	list_t *newNode = malloc(sizeof(list_t));
	newNode->str = str;
	
	copystr = strdup(str);
	newNode->next = *head;
	*head = newNode;
	if (newNode == NULL)
		return (NULL);
	return (newNode);
}
