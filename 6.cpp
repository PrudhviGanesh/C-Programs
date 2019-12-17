#include<stdio.h>
int main()
{
	int a,b,c,d,e;float avg;
	printf("Enter the marks of a,b,c,d,e");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("Average of 5 subjects is %f",avg);
	return 0;
}
