#include<stdio.h>
#include<conio.h>
void main()
{   int i;
	char str1[100],str2[100];
	 
	 printf("Enter the string");
	 scanf("%s",&str1);
	 
	 for(i=0;str1[i]!=0;i++)
	  {
			str2[i]=str1[i];
	 }
	  printf("The string copied is %s ",str2);
getch();
}
