#include<stdio.h>
int main()
{
	int d1,m1,y1,d2,m2,y2,d,m,y,t;
	printf("Enter your DOB:");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("Enter the present date:");
	scanf("%d %d %d",&d2,&m2,&y2);
	y=y2-y1;
	if(m2>m1)
	m=m2-m1;
	else
	m=m1-m2;
	if(d2>d1)
	d=d2-d1;
	else
	d=d1-d2;
	t=(365*y)+(30*m)+d;
	printf("You have lived for %d",t);
}
