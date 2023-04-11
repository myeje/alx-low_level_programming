#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: input integer
 * @index: input index to position to set number to 1
 * Return: 1 if worked, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxbin = 0x01;

	maxbin <<= index;

	if (maxbin == 0)
		return (-1);

	*n |= maxbin;
	return (1);
}
