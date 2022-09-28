#include <stdio.h>

/**
 *main - addresses of variables
 *
 *Return: Always 0.
 */

int main(void)
{
	char c;
	int n;
	double fl;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);
	printf("The memory address of 'f' : %p\n", &fl);

	return (0);
}
