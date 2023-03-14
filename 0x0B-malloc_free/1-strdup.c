#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of a string
 * @str: pointer of the string to copy
 * Return: Apointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *new, *final;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	final = str;

	while (*str)
	{
		size++;
		str++;
	}

	str = final;
	new = malloc(sizeof(char) * (size + 1));
	final = new;

	if (new != NULL)
	{	
		for (i = 0; i < size; i++)
		{
			new[i] = *str;
			str++;
		}
	}

	new[size + 1] = '\0';

	return (final);
	free(new);
}
