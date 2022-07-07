#include<stdio.h>
int main()
{
	int a[20],n,i,key,flag;
	printf("enter o of elements");
	scanf("%d",&n);
	printf("enter elements one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key element");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("search successful");
	}
	else
	{
		printf("search unsuccessful");
	}
	return 0;
}