#include <stdio.h>

/**
*main - Displays a hexadecimal literal
*
*Return: Always (Success)
*/
int main(void)
{
	char cha;

	for (cha = '0'; cha <= '9'; cha++)
	{
		putchar(cha);
	}

	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}

	utchar('\n');

	return (0);
}
