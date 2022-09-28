#include <stdio.h>

/**
 *main - using sizeof to dynamically determine the size of types char, int and float
 *
 *Return: Always 0.
 */

 int main(void)
{
	int n;
	int *p;
	int *pat[10];

	printf("Size of pat on my computer is: %lu bytes\nSize of p  on my computer is: %lu bytes\n", sizeof(pat), sizeof(p));
	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
	
	return (0);
}
