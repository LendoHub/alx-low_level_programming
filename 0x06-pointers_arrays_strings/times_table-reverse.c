#include <stdio.h>

int main()
{
	int num, iterator = 12;

	printf("Please enter the Integer between 1 and 12\n");
	scanf("%d", &num);
	
	printf("The reverse product table for %d\n##################################\n\n", num);
	if(num > 0 && num <= 12)
	{
		while (iterator > 0)
		{
			int product = num * iterator;
			printf("%d * %d = %d \n", num, iterator, product);
			//printf("Product");
			iterator--;
		}
	}
	else
		printf("Invalid input!");
}
