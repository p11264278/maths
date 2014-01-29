//This is the line causing issue in the master branch
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value for a: ");
	scanf("%i", &a);
	printf("Enter the value for b: ");
	scanf("%i", &b);
	c = a+b;
	printf("A + B = %i\n",c);
	c = 0;
	c = a-b;
	printf("A - B = %i\n",c);
	c = 0;
	c = a*b;
	printf("A * B = %i\n",c);
	c = 0;
	c = a/b;
	printf("A / B = %i\n",c);
	return 0;
}
