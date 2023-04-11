#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_unit - function that converts binary number to unsigned int
 * @b: input char binary number
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len = 0, basenum = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			num += basenum;
		basenum *= 2;
		len--;
	}
	return (num);
}
