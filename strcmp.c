#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10],b[10];
	int i=0;
	
	printf("Enter the first string \n");
	scanf("%s",&a);
	
	printf("enter the second string \n");
	scanf("%s",&b);
	
	while(a[i]==b[i] && a[i]!='\0')
	{   
	  i++;
		if(a[i]>b[i])
		{
			printf("first string is greater than second");
		}
	 	else if(a[i]<b[i])
	 	{
			printf("second string is greater than first");	
		}
		else
		{
		    printf("strings are equal");	
		}
	}
	getch();
}
