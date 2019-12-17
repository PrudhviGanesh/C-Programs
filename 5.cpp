#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,CI,A;
	printf("Enter Principle, Time and Rate of Interest");
	scanf("%f %f %f",&p,&t,&r);
	A=p*pow((1+r/100),t);
	CI=A-p;
	printf("Compound Interest is %f",CI);
	return 0;
}
