#include "main.h"
int prime_number_finder(int prm, int num);

/**
 * is_prime_number - function that returns if an int is a prime number
 * @n: input number
 * Return: 1 if int is prime number and 0 is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (prime_number_finder(prm, n));
}

/**
 * prime_number_finder - checks if num is prime n.
 * @prm: used to check if num can be divided
 * @num: number to be checked
 * Return: 1 if num is prime num, else 0
 */
int prime_number_finder(int prm, int num)
{
	if (num % prm == 0)
		return (0);
	if (prm == num / 2)
		return (1);
	return (prime_number_finder(prm + 1, num));
}
