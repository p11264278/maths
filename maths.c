//This is the line causing issue in the conflict branch
//This is the second line causing issue in the conflict branch
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a value for a: ");
	scanf("%i", &a);
	printf("Enter a value for b: ");
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
