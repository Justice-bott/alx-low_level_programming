#include <stdlib.h>

#include "lists.h"


/**
* list_len - returns the total counts of elements in a linked list.
* @h: pointer to the structure of thr list_t list
* Return: number of all the elements in h
*/

size_t list_len(const list_t *h)

{

	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
