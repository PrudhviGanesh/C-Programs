#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter 1-Addition  2-Subtraction\n");
	printf("Enter 3-Multiplication 4-Division\n");
	scanf("%d",&c);
	printf("Enter A and B:\n");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case 1:
			d=a+b;
			printf("Sum is %d",d);
			break;
		case 2:
			d=a-b;
			printf("Difference is %d",d);
			break;
		case 3:
			d=a*b;
			printf("Product is %d",d);
			break;
		case 4:
			d=a/b;
			printf("Division is %d",d);
			break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}
