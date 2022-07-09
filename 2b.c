//call by value , reference [swapping values]
#include<stdio.h>
int val(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n after swapping inside function a=%d, b=%d",a,b);
}
int ref(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n after swapping inside function a=%d, b=%d",*a,*b);
}
int main()
{
	int a,b;
	printf("enter value of a and b");
	scanf("%d %d",&a,&b);
	printf("\n call by value");
	printf("\n inside main before swapping a=%d , b=%d",a,b);
	val(a,b);
	printf("\n inside main after swapping a=%d , b=%d",a,b);
	printf("\n call by reference");
	printf("\n inside main before swapping a=%d , b=%d",a,b);
	ref(&a,&b);
	printf("\n inside main after swapping a=%d , b=%d",a,b);
	return 0;
}