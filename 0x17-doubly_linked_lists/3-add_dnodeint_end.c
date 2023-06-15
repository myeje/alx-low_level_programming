#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 ** add_dnodeint_end - function that adds a new node at the end
 ** @head: pointer to address of list
 ** @n: number to add
 ** Return: Address of the new element or NULL if failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *temp;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;
	add->prev = *head;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
		add->prev = temp;
	}
	else
	{
		add->prev = NULL;
		*head = add;
		return (add);
	}
	return (add);
}
