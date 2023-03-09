#include "main.h"

/**
 * is_prime_number - function that returns if an int is a prime number
 * @n: input number
 * Return: 1 if int is prime number and 0 is not
 */
int is_prime_number(int n)
{
	if (n / n == 1)
		return (1);
	if (n / 1 == n)
		return (1);
	else
		return (0);
	return (n / is_prime_number(n - 1));
}
