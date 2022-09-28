#include "main.h"
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: character pointer to reverse
 *
 * Return: 0 Always
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;

	for (int i = len; i >= 0; i--)
	{
		printf("%c", s[len--]);
	}
}
