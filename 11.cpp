#include<stdio.h>
int main()
{
	char a;
	a=getchar();
	int b=(int)a;
	if(b>=65&&b<=90)
	{
		b=b+32;
	}
	else if(b>=97&&b<=122)
	{
		b=b-32;
	}
	a=(char)b;
	printf("%c",a);
}
