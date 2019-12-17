#include<stdio.h>
int main()
{
	int c;
	printf("Enter the number of the day like 1-Monday, 2-Tuesday etc..");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("So sad you still need to work");
			break;
		case 2:
			printf("So sad you still need to work");
			break;
		case 3:
			printf("So sad you still need to work");
			break;
		case 4:
			printf("So sad you still need to work");
			break;
		case 5:
			printf("So sad you still need to work");
			break;
		case 6:
			printf("Its a holiday");
			break;
		case 7:
			printf("Its a holiday");
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
