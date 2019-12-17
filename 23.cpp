#include<stdio.h>
int main()
{
	char g;int b=0,s;
	printf("Enter the gender(M/F)\n");
	scanf("%c",&g);
	printf("Enter the salary\n");
	scanf("%d",&s);
	
	if(g=='M')
	if(s>=10000)
	b=1000;
	else if (s<10000 && s>5000)
	b=500;
	else
	b=100;
	
	if(g=='F')
	if(s>=10000)
	b=100;
	else if(s<10000&&s>5000)
	b=50;
	else
	b=10;
	
printf("you will get bonus of %d",b);
return 0;
}
