#include <stdio.h>

/**
 * main - declares and tests arrays
 *
 * Return: Always 0.
 */

int main()
{
	int a[98];

	printf("a: %p\n", a);
	printf("Address of a: %p\n", &a);
	printf("\na[0]: %p\n", &(a[0]));

	return (0);
}
