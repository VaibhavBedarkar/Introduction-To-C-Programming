#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0;
	char a[10];
	
	printf("Enter the string whose length is to be found\n");
	scanf("%s",&a);
	
	while(a[len]!='\0')
	{
		len++;
	}
	printf("length of string %d",len);

getch();	
}
