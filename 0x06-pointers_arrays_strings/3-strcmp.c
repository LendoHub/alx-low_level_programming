#include "main.h"

/**
*_strcmp - Function which compare two strings and
*@s1: first string parameter
*@s2: second string parameter
*
*Return: 0 if equal or 'diff' if different
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int diff = 0;

	while (s1[a] != '\0' && diff == 0)
	{
		diff = s1[a] - s2[a];
		a++;
	}
}
