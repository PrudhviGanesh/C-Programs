#include <stdio.h>
int main()
{
	float x,y,z,a,l,b,h,r;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	x=3.14*r*r;
	printf("The area of the circle is %f", x);
	
	printf("\nEnter the length and breadth of the rectangle:");
	scanf("%f %f",&l,&b);
	a=l*b;
	printf("The area of the rectangle is:%f",a);
	
	printf("\nEnter the height and base of triangle:");
	scanf("%f %f",&z,&h);
	y=0.5*z*h;
	printf("Area of a triangle:%f",y);
	return 0;
}
