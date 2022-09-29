#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be used
 *
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);

	return (real_root(0, n));
}

/**
 * real_root - finds the natural square root of a number
 * @n: input number
 * @i: counter
 * Return: return the square root of the number
 */

int real_root(int n, int i)
{
	if (n > i / 2)
		return (-1);
	if (n * n == i)
		return (n);
	return (real_root(n + 1, i));
}
