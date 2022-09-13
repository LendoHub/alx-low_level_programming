#include "main.h"

/**
 *print_sign - prints '+' if number is greater than 0, 
 *'-' if number is negative and print 0 otherwise
 *@n: the int to print
 *
 * Return: Always 0.
 *
 */

int print_sign(int n)

{

	if (n > 0)
	{

		_putchar ('+');

		return (1);

	}



	else if (n == 0)
	{

		_putchar ('0');

		return (0);

	}



	else

	{

		_putchar ('-');

		return (-1);

	}



}
