#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0)
			c++;
			
	if(c==2)
	printf("%d is Prime",n);
	else
	printf("%d is not Prime",n);
	return 0;
}
