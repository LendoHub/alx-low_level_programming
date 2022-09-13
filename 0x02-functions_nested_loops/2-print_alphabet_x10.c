#include "main.h"

/**
*print_alphabet_x10 - prints alphabets Ten(10) times to the screen
*
*Return: Always 0.
*/

void print_alphabet_x10(void)
{

	int alphabet;
	int line;

	line = 0;

	while (line < 10)
	{

		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)

		{

			_putchar(alphabet);

		}


		line++;

		_putchar('\n');

	}

}
