#include<stdio.h>
int main()
{
	int ca,att;
	printf("Enter ca marks and attendance");
	scanf("%d %d",&ca,&att);
	((ca>=40) && (att>=75))?printf("He is eligible for ETE"):printf("He is not eligible");
	return 0;
}
