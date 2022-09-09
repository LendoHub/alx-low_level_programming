#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: Determines and displays whether number is positive, negative or zero
 *
 *Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {	
		printf("%n is positive\n", n);
	}	
	else if (n < 0) {
	       	printf("%n is negative\n", n);
	}
	else {
		printf("%i is positive\n", n);
	}

	return (0);

}
