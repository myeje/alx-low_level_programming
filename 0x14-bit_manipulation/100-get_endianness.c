#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the edianness meaning how numbers are stored
 * Return: 1 for little-endian or 0 for big-endian
 */
int get_endianness(void)
{
	int i = 1;
	char *a = (char *)&i;

	if (*a)
		return (1);
	else
		return (0);
}
