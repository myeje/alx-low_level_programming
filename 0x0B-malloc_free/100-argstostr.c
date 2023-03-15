#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function concatenates all arguments of program
 * @ac: argument count
 * @av: array of argument string
 * Return: A pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int a = 0, b = 0, c = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++)
	{
		for (; av[a][b]; b++)
			len++;
		len++;
	}
	len++;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (; a < ac; a++)
	{
		for (; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}

	p[c] = '\0';
	return (p);
	free(p);
}
