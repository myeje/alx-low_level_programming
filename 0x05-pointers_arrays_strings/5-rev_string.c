#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char aux;

	while (s[len] != 0)
		len++;

	while (i < len)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
