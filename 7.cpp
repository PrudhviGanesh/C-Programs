#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in Fahrenheit:");
	scanf("%f",&f);
	c=(f-32.0)*(5.0/9.0);
	printf("The temperature in centigrades is %f",c);
	return 0;
}
