#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *Pointer;
	char User_Id[10];
	char b[10];
	char Pass_wd[10];
	char p;
	int c;
	Pointer=fopen("Vaibhav.txt","r");
	
	if(Pointer==NULL)
	  {
			printf("File not found");
	  }
	  
	  else{
			
			while(fgets(User_Id,10,Pointer)!=NULL)
			{
				
				}
				
	 
	 printf("File contents are %s\n",a);
	 printf("Enter Id to compare\n");
	 scanf("%s",&b);
	 
	 printf("enter the Password to verify user");
	 scanf("%s",&p);
	 c=strcmp(User_Id,b);
	 int d=strcmp(Pass_wd,p);
	 if(c==0)
	 {printf("user found");
			}
			else{
				printf("user not found");
					 
					 
					 
		if(d==0)
	           {printf("Password correct");
	           
	               	}else printf("Password invalid");
	  }
	  

	fclose(Pointer);
	getch();
	
	
}
