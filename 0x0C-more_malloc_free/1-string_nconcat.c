#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first inputc string
 * @s2: second input string
 * @n: input integer
 * Return: pointer to string or NULL termination
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *first, *second, *new;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	first = s1;
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = first;
	if (s2 == NULL)
		s2 = "";
	second = s2;
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = second;
	if (n >= len2)
		n = len2;
	new = malloc(len1 + n + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			new[i] = *s1;
			s1++;
		}
		else
		{
			new[i] = *s2;
			s2++;
		}
	}
	new[len1 + n + 1] = '\0';
	return (new);
}
