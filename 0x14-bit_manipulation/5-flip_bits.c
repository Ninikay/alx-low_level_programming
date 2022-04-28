#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: input first number to modify
 * @m: input second number to modify
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = 0, count = 0;

	nbits = n ^ m;
	while (nbits)
	{
		if (nbits & 1)
			count++;

		nbits >>= 1;
	}

	return (count);
}
