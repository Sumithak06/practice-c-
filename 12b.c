//selection sort
#include<stdio.h>
int main()
{
	int a[20],n,min,temp,i,j;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter elements one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("sorted array");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}