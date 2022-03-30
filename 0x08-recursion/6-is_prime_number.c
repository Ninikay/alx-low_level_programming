#include "main.h"

/**
 * is_prime - check if an input number is a prime number
 * @n: input number being checked
 * @i: possible number of prime factor
 * Return: 1 if prime number. 0 if not a prime number.
 */
int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}
/**
 * is_prime_number - checks if an input number is a prime number
 * @n: input number being checked
 * Return: 1 if prime number. 0 if not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
