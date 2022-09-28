#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to y
 * @x: the number to be used
 * @y: the exponent
 *
 * Return: X^y
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
