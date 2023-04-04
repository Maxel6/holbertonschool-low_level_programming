#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
