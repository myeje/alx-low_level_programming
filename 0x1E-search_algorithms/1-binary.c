#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * using the binary search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: all
 *
*/
int binary_search(int *array, size_t size, int value)
{
	int x = 0, y, z = size - 1;
	int idx;

	if (array == NULL)
	{
		return (-1);
	}
	while (x <= z)
	{
		y = (x + z) / 2;
		printf("Searching in array: ");

		for (idx = x; idx <= z; idx++)
		{
			printf("%i%s", array[idx], idx == z ? "\n" : ", ");
		}
		if (array[y] < value)
			x = y + 1;
		else if (array[y] > value)
			z = y - 1;
		else
			return (y);
	}
	return (-1);
}
