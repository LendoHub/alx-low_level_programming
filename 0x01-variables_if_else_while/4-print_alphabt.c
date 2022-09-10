#include <stdio.h>

/**
* main - Alphabets in lowercase followed by newline
*
*Return: Always (Success)
*/
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	putchar('\n');

	return (0);
}
