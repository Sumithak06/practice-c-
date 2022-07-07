#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("numbers from 0 to %d that are divisible by 2 but not by 3 and 5 are listed below",n);
	for(i=0;i<n;i++)
	{
		if(i%2==0&&i%3!=0&&i%5!=0)
		{
			printf("\n %d",i);
		}
	}
	return 0;
}