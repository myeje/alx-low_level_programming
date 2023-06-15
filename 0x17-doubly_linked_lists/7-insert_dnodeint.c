#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that adds node at a given position
 * @h: pointer to pointer of linked list
 * @idx: nth position to replace data
 * @n: data to replace with
 * Return: Address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int num = 0;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		temp = *h;
		while (temp != NULL)
		{
			if (num == idx)
			{
				new->n = n;
				new->next = temp;
				new->prev = temp->prev;
				if (temp->prev != NULL)
					temp->prev->next = new;
				temp->prev = new;
				return (new);
			}
			temp = temp->next;
			num++;
		}
	}
	return (NULL);
}
