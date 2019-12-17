#include<stdio.h>
int main()
{
	float p,t,r,SI;
	printf("Enter Principe, Time and Rate of Interest:");
	scanf("%f %f %f",&p,&t,&r);
	SI=(p*t*r)/100;
	printf("Simple Interest is %f",SI);
	return 0;
}
