#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: pointer to array
 * @n: Input length of array
 * Return - nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;
	char temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
