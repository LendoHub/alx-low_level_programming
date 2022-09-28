#include <stdio.h>

int main()
{

	int num;
	int itr = 1;

	printf("Please enter the Integer between 1 and 12 to multiply:\n");
	scanf("%d: ", &num);

	if (itr > 0 && itr < 12)
	{
		printf("Product table for %d\n", num);

		while (itr <= 12)
		{
			int product = itr * num;

			if (itr > 9)
				printf("%d  *  %d = %d \n", itr, num, product);
			else
				printf("%d   *  %d = %d \n", itr, num, product);
			itr++;
		}
		printf("The end!....");
	}
}
