#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 ** main - function name
 ** @argc: argument count
 ** @argv: argument string
 ** Return: it's name
 **/
int main(int argc, char **argv)
{
	int i, sum = 0;

	while (argc > 1)
	{
		argc--;

		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
