#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t) * 1);
    dlistint_t *tmp = malloc(sizeof(dlistint_t) * 1);
    dlistint_t *tmp2 = malloc(sizeof(dlistint_t) * 1);
    unsigned int i = 0;
    
    if (!h || !*h || !new || !tmp || !tmp2)
        return (NULL);
    new->n = n;
    tmp = *h;

         while (idx != 1)
         {
            tmp = tmp->next;
            i--;
         }
         if (!tmp->prev)
         {
            new->prev = NULL;
            tmp->next = new;
         }
         if (!tmp->next)
         {
            tmp->next = new;
            new->prev = tmp;
         }
         else
         {
         tmp2 = tmp->next;
         tmp->next = new;
         tmp2->prev = new;
         new->next = tmp2;
         new->prev = tmp;
         } 
    return (new);
}
