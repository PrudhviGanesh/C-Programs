#include<stdio.h>
int main()
{
	int a,h,m;
	printf("Enter time in minutes:");
	scanf("%d",&a);
	h=a/60;
	m=a%60;
	printf("Time is %d hours and %d minutes",h,m);
	return 0;
}
