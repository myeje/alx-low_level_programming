#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to linked list
 * @index: index to find value at
 * Return: value at nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (num == index)
			return (temp);
		temp = temp->next;
		num++;
	}
	return (NULL);
}
