//pallindrome
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the word :");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	if(!strcmp(str1,str2))
		printf("\n it is a pallindrome");
	else
		printf("\n it is not a pallindrome");
	return 0;
}