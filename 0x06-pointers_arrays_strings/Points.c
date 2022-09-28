#include <stdio.h>

int main()
{
	int i = 54;
	float a = 3.14;
	char *ii, *aa;

	ii = (char *) &i;
	aa = (char *) &a;

	printf("\nAddress contained in ii = %u", ii);

}
