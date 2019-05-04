#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *ptr;
	
	int len,counter;
	char a[10];
	
	printf("Enter the string ");
	scanf("%s",&a);
	
	len=strlen(a);
	
	ptr=fopen("File.txt","w");
	
	if(ptr==0)
	{
		printf("ERROR!!");
		}
	else
	{
		for(counter=0;counter<len;counter++)
		   {
				fputc(a[counter],ptr);
				printf("string is %c\n",a[counter]);
				}
		fclose(ptr);
		
		getch();
		
		
		}
}
