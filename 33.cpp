#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
		printf("Even Numbers are:\n");
		printf("%d\n",i);
		}
	}
	for(i=1;i<=10;i++)
	{
	if(i%2==1)
	{
		printf("Odd Numbers are:\n");
		printf("%d\n",i);
	}
	}
	return 0;
}
