#include "main.h"
/**
 *real_root - finds the natural square root of a number
 *@x: input number
 *@i: counter
 *Return: return the square root of the number
 */

int real_root(int x, int i)
{
	if ((i * i) == x)
		return (i);

	if (i == x / 2)
		return (-1);

	return (real_root(x, i + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be used
 *
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (root(n, i));
}
