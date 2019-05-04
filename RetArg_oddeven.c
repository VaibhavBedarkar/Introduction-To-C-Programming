#include<stdio.h>
#include<conio.h>

float oddeven(float);

void main()
{
	float a,o;
	printf("Enter the no.");
	scanf("%f",&a);
	
	o=oddeven(a);
	printf("the no is",o);
	getch();	
}
 
 
 float oddeven(float oe)
 {
	if(oe%2==0)
	{
		printf("  even");
		}	
	else{
		printf("  odd");
	}	
 }
