#include<stdio.h>
int main()
{
	int a,b=0,c,d;
	printf("Enter any number:\n");
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		c=a%10;
		b=b*10+c;
		a=a/10;
	}
	if(b==d)
	printf("Palindrome");
	else
	printf("Not a Palindrome");
	return 0;
	
}
