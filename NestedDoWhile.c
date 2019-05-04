#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	
	printf("enter the no.");
	scanf("%d",&a);
	
	do{
		printf("loop 1. %d \n",a);
		a++;
		
		do{
		  printf("\t loop 2. %d \n",a);
		  a++;
		  }while(a<=3);
		
	}while(a<=5);
	getch();
}

