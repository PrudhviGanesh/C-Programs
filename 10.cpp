#include<stdio.h>
int main()
{
	int x,y=0;
	printf("Enter any 4-digit number:");
	scanf("%d",&x);
	while(x!=0)
	{
		int z=x%10;
		y=y+z;
		x=x/10;
	}
	printf("Sum of digits is %d",y);
	return 0;
}
