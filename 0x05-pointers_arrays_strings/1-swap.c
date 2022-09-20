#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return : Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a; //Using a temporary variable to hold on value

	*a = *b;
	*b = temp;
}
