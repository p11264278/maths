<<<<<<< HEAD
//This is the line causing issue in the master branch
=======
//This is the line causing issue in the conflict branch
<<<<<<< HEAD
>>>>>>> conflict
//This is the second line causing issue in the master branch
=======
//This is the second line causing issue in the conflict branch
>>>>>>> conflict
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
