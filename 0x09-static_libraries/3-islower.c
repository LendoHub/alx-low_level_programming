#include "main.h"

/**
*_islower - prints 1 to the screen if the character is lower and 0 otherwise
*@c: The character whose case will be checked
*
* Return: Always 0.
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{

		return (1);

	}
	else
	{

		return (0);

	}

}
