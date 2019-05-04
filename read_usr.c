#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *Pointer;
	char a[10];
	char b[10];
	int o;
	 
	 printf("Enter user-id");
	 scanf("%s",&b);
	
	Pointer=fopen("Register01.txt","r");
	
	if(Pointer==NULL)
	  {
			printf("File not found");
	  }
	  
	  else{
			
			while(fgets(a,10,Pointer)!=NULL)//read user
			{
			 o=strcmp(a,b);
		    } 
			 if(o==1)
			 {
					printf("user found");
					
					}
					else{
						printf("user not found");
					}
		    }
	  
	fclose(Pointer);
	
	
	
	
	
}
