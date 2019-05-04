#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<C:\Users\hp\Documents\MyWorkspace\pre_Bank_Create.c>
#include<C:\Users\hp\Documents\MyWorkspace\pre_Bank_Verify.c>
void main()
{   
	int ch;
	char ch2;
	
	printf("Welcome To The Console\n");
	do
	{
		printf("1.Create Account\n");
		printf("2.Account Login\n");
		
	printf("Enter Your Choice (1-3)");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: User_Cre();
		break;
			
	   case 2: Verify();
		 break;   
		
		default:break;
		
	}
	  printf("Do You Want to continue (y/n)???");
	  scanf("%s",&ch2);
	}while(ch2=='y'|| ch2=='Y');

getch();
}
