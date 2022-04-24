/*
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
#include<stdio.h>
int main()
{
	int a=1,b=1,c,sum=0;
	while(b<4000000)
	{
	c=a;
    a=b;
    b=c+b;
    if(b%2==0)
    {
        sum=sum+b;
    }
}
    printf("%d",sum);
}
