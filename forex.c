#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	
	printf("Enter the no.");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("the no. is even %d \n",i);
			}
		else
		{
			printf("The no. is odd %d \n",i);
			}
		
	}
	getch();
	
}
