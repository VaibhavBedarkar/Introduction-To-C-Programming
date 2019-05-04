#include<stdio.h>
#include<conio.h>
void calculate(int x,int y,int w);
void main()
{
	int a,b,x,y,w;
	printf("enter 1 no  ");
	scanf("%d",&a);
	
	printf("enter 2 no ");
	scanf("%d",&b);
	
	calculate(a,b,w);
	getch();
	
}

void calculate(int x,int y,int w)
{
	w=x+y;
	printf("there addition is%d",w);
}
