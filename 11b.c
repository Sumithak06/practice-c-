//binary search
#include<stdio.h>
int main()
{
	int a[20],n,key,start,stop,mid,flag,i;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter elements one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key element to find");
	scanf("%d",&key);
	while(start<=stop)
	{
		mid=(start+stop)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		{
			stop=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	if(flag==1)
	{
		printf("element id found at %d",mid+1);
	}
	else
	{
		printf("element not found");
	}
	return 0;
}