#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *Fptr;
	 
	 int len,counter,ch;
	 char usr[100];
	
	 printf("------------------------------------\n");
	 printf("WELCOME\n");
	 printf("------------------------------------\n");
	 printf("1.Create user\n");
	 printf("2.User Login\n");
	 scanf("%d",&ch);
	
do{	
	switch(ch)
	{
	 case 1:
			printf("Enter UserId");
			scanf("%s",&usr);
			
			Fptr=fopen("UserData.txt","w");
			len=strlen(usr);
			
			for(counter=0;counter<len;counter++)
			   {
			      fputc(usr[counter],Fptr);		
			   
			   }
            break;


     case 2:
			while(fgets(usr,100,Fptr)!=NULL)
			   {
			       if(usr)		
			   
			   }
						
	       break;		

  default:break;
		
		
   }while(1==1);
   
      
