#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[100],s2[100];
	//int i=0,j=0;
	printf("Enter the first string");
	scanf("%s",&s1);
	
	printf("Enter seconf string");
	scanf("%s",&s2);
	
	printf("After concationation ");
	
   //while(s1[i] && s2[j]=='\0')
	  printf("%s%s",s1,s2);
   
	//  printf("%s",s2); 
	  
	getch();
}
