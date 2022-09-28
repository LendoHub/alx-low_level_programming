#include <stdio.h>

/**
 *main - prints the address of an array
 *
 *Return: Always 0.
 */

int main(void)
{
	char b[98];
	
	printf("b: %p\n", b);
	printf("&b: %p\n", &b);

	printf("b[0]: %p\n", &(b[0]));
	printf("Size of b: %lu\n", sizeof(b));

	return (0);
}
