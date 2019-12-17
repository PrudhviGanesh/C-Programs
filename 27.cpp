#include<stdio.h>
int main()
{
	int a,b,c;char x;
	printf("Enter s-square,r-rectangle,c-circle");
	scanf("%c",&x);
	switch(x)
	{
		case 's':
			printf("Enter the side of square\n");
			scanf("%d",&a);
			c=a*a;
			printf("Area of square is %d",c);
			break;
		case 'r':
			printf("Enter the length and breadth of rectangle:\n");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("Area of rectangle is %d",c);
			break;
		case 'c':
			printf("Enter the radius of circle\n");
			scanf("%d",&a);
			c=3.14*a*a;
			printf("Area of circle is %d",c);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
