#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("num1 is the greatest no");
	}
	else
	{
		printf("num2 is the greatest no");
	}
	return 0;
}