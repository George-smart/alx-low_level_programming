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
	int length = 0;
	list_t *newNode 
	
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
