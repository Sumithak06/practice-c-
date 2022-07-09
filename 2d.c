//structure to save stdents details 
#include<stdio.h>
struct std
{
	int rollno,m1,m2,total;
	char name[50];
	float average;
}s[20];
int main()
{
	int n,i;
	printf("enter the number of students to enter record");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the name");
		scanf("%s",&s[i].name);
		printf("enter rollno");
		scanf("%d",&s[i].rollno);
		printf("enter mark 1 and mark 2");
		scanf("%d %d",&s[i].m1,&s[i].m2);
		s[i].total=(s[i].m1+s[i].m2);
		s[i].average=s[i].total/2.0;
	}
	printf("\nRoll No. Name \t\tSub1\t Sub2\t Total\t Average\n\n") ;
    for(i = 0 ; i<n ; i++)
        printf("%d \t %s \t\t %d \t %d \t %d \t %.2f    \n",s[i].rollno,s[i].name,s[i].m1,s[i].m2,s[i].total,s[i].average);
    return 0;
}