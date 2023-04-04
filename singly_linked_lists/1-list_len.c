#include "lists.h"
/**
 * list_len - count the number of elemets of a single linked list
 * @h: is a single linked list of type list_t
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{

	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
