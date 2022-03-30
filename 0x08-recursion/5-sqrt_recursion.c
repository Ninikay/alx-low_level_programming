#include "main.h"
#include <stdio.h>

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: Input number to calculate
  *
  * Return: Integer
  */
int _sqrt(int n, int k);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}


/**
  * _sqrt - Natural square root
  * @n: Input number to calculate
  * @k: Number to iterate
  *
  * Return: Integer
  */
int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (k);

	return (_sqrt(n, k + 1));
}
