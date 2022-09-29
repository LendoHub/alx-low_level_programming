#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be used
 *
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (real_root(n, 0));
}

/**
 * real_root - finds the natural square root of a number
 * @n: input number
 * @i: counter
 * Return: return the square root of the number
 */

int real_root(int n, int i)
{
	if (i * i > 10)
		return (-1);
	if (i * i == n)
		return (1);
	return (real_root(n, i + 1));
}
