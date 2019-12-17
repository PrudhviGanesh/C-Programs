#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the value of Temperature in centigrade:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\nTemperature in Fahrenheit is %f :",f);
	return 0;
}
