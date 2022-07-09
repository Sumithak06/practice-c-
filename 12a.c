//bubble sort
#include<stdio.h>
int main()
{
	int a[20],n,i,temp,j;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter elements one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted array");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}