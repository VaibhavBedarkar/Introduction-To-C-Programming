#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	
	printf("Enter the no. ");
	scanf("%d",&a);
	
	while(a<=10)
	{
		printf("\n loop no 1. %d",a );
		a++;
		while(a<=8)
		{
			printf("\n \t loop no.2 %d",a);
			a++;
		 };		
	};
		getch();
}
