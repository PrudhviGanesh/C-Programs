#include<stdio.h>
int main()
{
	int p,b,n,t;
	printf("The cost of pen is Rs.10\n");
	printf("Enter the number of pens you want\n");
	scanf("%d",&p);
	printf("The cost of book is Rs.20\n");
	printf("Enter the number of books you want\n");
	scanf("%d",&b);
	printf("The cost of note book is Rs.15\n");
	printf("Enter the number of notebook you want\n");
	scanf("%d",&n);
	t=((10*p)+(20*b)+(15*n));
	printf("%d pens = Rs. %d\n",p,10*p);
	printf("%d books = Rs. %d\n",b,20*b);
	printf("%d notebooks = Rs. %d\n",n,15*n);
	printf("Grand Total=%d\n",t);
	return 0;
}
