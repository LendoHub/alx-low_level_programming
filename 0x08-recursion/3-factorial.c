#include "main.h"

/**
 *factorial - prints the factorial of a number
 *@n: parameter for the factorial
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	int r;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);

	r = n * factorial(n - 1);

	return (r);
}
