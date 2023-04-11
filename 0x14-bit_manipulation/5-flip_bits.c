#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits  you would need to flip
 * @n: number of bit flips needed
 * @m: input number to set another equal
 * Return: number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = (n ^ m), maxbin = 0x01;
	unsigned int fliped = 0;

	while (maxbin <= xor)
	{
		if (maxbin & xor)
			fliped++;
		maxbin <<= 1;
	}
	return (fliped);
}
