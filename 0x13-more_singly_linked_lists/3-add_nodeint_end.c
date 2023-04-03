#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *temp;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add;

	return (add);
}
