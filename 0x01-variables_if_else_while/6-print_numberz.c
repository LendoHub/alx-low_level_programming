#include <stdio.h>

/**
*main - Prints single digit numbers
*
*Return: Always (Success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
