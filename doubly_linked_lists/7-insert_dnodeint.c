#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a new node at index
 *@h: the dlistint
 *@idx: the index for new node
 *@n: the data of the new node
 *Return: the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t) * 1);
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = NULL;

	if (!new)
	{
		free(new);
		printf("!new");
		return (NULL);
	}

	if (*h == NULL && idx)
		return (NULL);

	if (!idx)
		return (add_dnodeint(h, n));


	for (; idx != 1; idx--)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
	}
	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	tmp2 = tmp->next;
	tmp->next = new;
	tmp2->prev = new;
	new->n = n;
	new->prev = tmp;
	new->next = tmp2;

	return (new);
}
