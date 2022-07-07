#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the ending number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of natural numbers till %d = %d",n,sum);
	return 0;
}