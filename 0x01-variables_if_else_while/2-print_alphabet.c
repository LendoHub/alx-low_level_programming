v#include <stdio.h>

/**
*main - Display LowerCase Alphabets on standard output
*
*Return: Always (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
