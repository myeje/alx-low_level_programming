#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: array of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return(num);

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
