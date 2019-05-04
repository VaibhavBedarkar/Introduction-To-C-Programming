#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *Pointer;
	char a[10];
	char b[10];
	int c;
	Pointer=fopen("Vaibhav.txt","r");
	
	if(Pointer==NULL)
	  {
			printf("File not found");
	  }
	  
	  else{
			
			while(fgets(a,10,Pointer)!=NULL)
			{
			printf("File contents are %s",a);	
				}
				
	  
	fclose(Pointer);
	getch();
	
	
}
