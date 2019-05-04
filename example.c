#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	
	printf("Enter the speed by which 3 friends travel to college respectively \n");
	printf("enter speed of A \n");
	scanf("%f",&a);
	
	printf("enter speed of B \n");
	scanf("%f",&b);
	
	printf("enter speed of C \n");
	scanf("%f",&c);
	
	if(a>b)
	{ 
	  if(a<c)
	   {  printf("A will reach college after C ");
	   	}
		else
		{
			printf("A will reach college early");
			}
		}
	else
		{ 
			if(a<b)
			{
				printf(" A will reach after b");
				}
			else
			{printf("B will reach college early");
				}
			
			}
			getch();
	
}
