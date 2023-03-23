#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: amount of arguments passed
 * va_list -macro for iterating arguments
 * va_start - macro for starting the iteration
 * Return: sum of al parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; 
	int sum = 0;
	va_list ab;

	if (n == 0)
		return (0);

	va_start(ab, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}
