#include<stdio.h>
int main()
{
	int u,r,h;
	printf("Enter number of units consumed:\n");
	scanf("%d",&u);
	if(u>200)
	h=u-200;
	if(u<=200)
	{
		r=u*2;
		printf("units consumed is %d",u);
		printf("Amount is %d",r);
	}
	else if((u>200)&&(u<=400))
	{
		r=(200*2)+(h*4);
		printf("Bill Amount is %d",r);
	}
	return 0;
}
