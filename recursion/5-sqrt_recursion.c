#include "main.h"

/**
 * _sqrt_helper - function that finds the square root
 * @n: number whose square root we want
 * @i: number tested as a possible root
 * Return: square root
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number for which we want the square root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
