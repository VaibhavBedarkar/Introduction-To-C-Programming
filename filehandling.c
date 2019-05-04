#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *Fpointer;
	
	int len,counter;
	char a[10]={'v','a','i'};
	 
	 len=strlen(a);
	Fpointer=fopen("Vaibhav.txt","w");
	
  if(Fpointer == 0)
  {
		printf("Error");
		
	}

  else
	for(counter=0;counter<len;counter++)
	   {
		fputc(a[counter],Fpointer);
		printf("character %c \n",a[counter]);
		
	   }
	   printf("entered string is %s",a);
	   fclose(Fpointer);
	   
	getch();
}
