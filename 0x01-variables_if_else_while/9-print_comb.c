#include <stdio.h>

/**
*main - Prints combination of single digit numbers
*
*Return: Always (Success);
*/
int main(void)
{
	int chap;

	for (chap = '0'; chap <= '9'; chap++)
	{
		putchar(chap);

		if (chap != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
