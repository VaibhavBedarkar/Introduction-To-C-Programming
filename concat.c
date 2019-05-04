#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	printf("enter string 1\t");
	scanf("%s",&s1);
	
	printf("enter string 2\t");
	scanf("%s",&s2);
	

	printf("string after concat are \t%s%s",s1,s2);
	getch();
}
