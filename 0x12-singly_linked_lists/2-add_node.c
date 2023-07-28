#include <stdlib.h>

#include <string.h>

#include "lists.h"


/**
* add_node - put new node at the start  of linked list
* @head: double pointer to the data structure of the  list_t list
* @str: new string to be added to the node
* Return: the address of just the added element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)

{

	list_t *new;

	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
