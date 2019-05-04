#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *Pointer;

	
	int len,counter;
	char User_Id[10];
	char Pass_wd[10];
	
	printf("Create user_id ");
	scanf("%s",&User_Id);
	
	printf("Create the Password");
	scanf("%s",&Pass_wd);
	len=strlen(User_Id);
	
	int len_p=strlen(Pass_wd);
	
	Pointer=fopen("Vaibhav.txt","w");
	
	if(Pointer==0)
	{
		printf("ERROR!!");
		}
	else
	{
		for(counter=0;counter<len;counter++)
		   {
				fputc(User_Id[counter],Pointer);
				printf("Your UserId is %c\n",User_Id[counter]);
		   }
				
				
				
		for(counter=0;counter<len_p;counter++)
		
		{
			fputc(Pass_wd[counter],Pointer);
			printf("Your Password is %c\n",Pass_wd[counter]);			
			
			}
		fclose(Pointer);
		
		getch();
	
}
}


