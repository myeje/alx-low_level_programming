#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - function prints the binary representaion of a number
 * @n: input number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int maxbin = 32768, point = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (maxbin)
	{
		if (point == 1 && (n & maxbin) == 0)
			_putchar('0');
		else if ((n & maxbin) != 0)
		{
			_putchar('1');
			point = 1;
		}
		maxbin >>= 1;
	}
}
