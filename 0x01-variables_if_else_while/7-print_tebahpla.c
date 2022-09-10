#include <stdio.h>

/**
*main - Dispays alphabet in reverse order
*
*Return: Always (Success)
*/
int main(void)
{
	char cha;

	for (cha = 'z'; cha >= 'a'; cha--)
	{
		putchar(cha);
	}

	putchar('\n');

	return (0);
}
