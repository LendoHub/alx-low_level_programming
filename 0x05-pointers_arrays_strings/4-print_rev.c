#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - Prints a string in reverse order
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		putchar(*(s + length));
	}
	putchar(10);
}
