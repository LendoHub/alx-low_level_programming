#include "main.h"

/*
*_strchr - locates a character in a string
*
*@s: string to be searched
*@c: character to search
*
*Return: pointer to first occurence of c
*/

char *_strchr(char *s, char c)
{
	int i;

	for(i = 0; *(s+1); i++)
	{
		if(*(s + 1) == c)
			return (s + i);
	}
	if(*(s + 1) == c)
		return (s + i);
	return (0);
}
