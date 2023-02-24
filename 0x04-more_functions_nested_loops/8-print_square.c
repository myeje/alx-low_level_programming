#include "main.h"

/**
 * print_square - a function that draws a square on the terminal.
 * @size: size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (; b < size; b++)
				_putchar(35);
		_putchar('\n');
		}
	}
}
