#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	
	printf("enter the no.");
	scanf("%d",&a);
	
	do{
		printf("loop no.%d \n",a);
		a--;
		
	}while(a>=10);
getch();	
	
}
