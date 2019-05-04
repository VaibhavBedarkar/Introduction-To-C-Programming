#include<conio.h>
#include<stdio.h>
void oddeven(int);

void  main()
{
	int a;
	
	printf("Enter the No to check");
	scanf("%d",&a);
	
	oddeven(a);
	getch();
	
}
 
 void oddeven(int b)
 {
	if(b%2==0)
	{
		printf("the no is even");
		}
	else{
		printf("the no is odd");
	}
		
	}
