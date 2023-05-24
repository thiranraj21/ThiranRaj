#include <stdio.h>
int main()
{
	int a= 17, b= 53;
	printf ("before swap a= %d b= %d", a,b);
	a= a+b;//a= 70 (17+53)
	b= a-b;//b= 17 (70-53)
	a= a-b;//a= 53 (70-17)
	printf("\n after swap a= %d b= %d",a,b);
	return 0;
}
