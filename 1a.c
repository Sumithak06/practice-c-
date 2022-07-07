#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temperature in celcius to convert to farenheit");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("\n farenheit value is %f",f);
	printf("\n enter temperature in farenheit to convert to celcius");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("\n celcius value id %f",c);
	return 0;
}