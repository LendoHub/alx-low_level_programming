#include <stdio.h>

/**
* main - Alphabets in lowercase followed by newline
*
*Return: Always (Success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'c'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
i
