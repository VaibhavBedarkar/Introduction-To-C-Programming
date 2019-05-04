#include<stdio.h>
#include<conio.h>
void oddeven();// declaration

void main()
{
	oddeven();// calling
	getch();
}

void oddeven()
{
	int a;
	
	printf("enter nos \n");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("the no is even ");
		}
		else{
			printf("the no is odd");
		}
	
}

