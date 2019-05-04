#include<stdio.h>
#include<conio.h>
void SmallNum();

void main()
{
	SmallNum();
	getch();
}

 void SmallNum()
 {
   int i,j,small;
	
	printf("Enter two numbers \n");
	scanf("%d%d",&i,&j);

	
   		if(i<j)
   		{
		printf("The smaller no is %d",i);	
		
		}
        else
		{
		printf("The smaller no is %d",j);		
		 
		 }		
 
 
 }
