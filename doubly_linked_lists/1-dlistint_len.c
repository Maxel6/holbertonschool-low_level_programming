#include "lists.h"
/**
 * dlistint_len - count the number of elements in a linked
 * @h: the double linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		h = h->next;
		count++;
	}
	return (count);
}
