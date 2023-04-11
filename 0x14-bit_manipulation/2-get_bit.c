#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input number to get bit
 * @index: position to get the bit
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int maxbin = 0x01;

	maxbin <<= index;
	if (maxbin == 0)
		return (-1);
/**
	if (n == NULL)
		return (-1);
*/
	if ((n & maxbin))
		return (1);
	else
		return (0);
}
